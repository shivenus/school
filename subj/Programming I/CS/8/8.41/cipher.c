#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "cipher.h"

// Helper function to check if the key is valid (only letters)
bool checkKey(const char *key) {
    for (int i = 0; key[i] != '\0'; i++) {
        if (!isalpha(key[i])) return false; // isalpha checks if A-Z or a-z
    }
    return true;
}

// The core logic function requested by the book
static char getSubstitution(char keyChar, char textChar, bool isEncrypt) {
    // static const means the table is built once and stays in memory
    static char square[26][26];
    static bool initialized = false;

    // Logic to fill the 26x26 table if it hasn't been done yet
    if (!initialized) {
        for (int r = 0; r < 26; r++) {
            for (int c = 0; c < 26; c++) {
                square[r][c] = 'A' + (r + c) % 26;
            }
        }
        initialized = true;
    }

    // Convert chars to 0-25 index (e.g., 'A' becomes 0, 'B' becomes 1)
    int row = toupper(keyChar) - 'A';
    char target = toupper(textChar);

    if (isEncrypt) {
        int col = target - 'A';
        char result = square[row][col];
        // Preserve original case: if input was 'b', return 'c' instead of 'C'
        return islower(textChar) ? tolower(result) : result;
    } else {
        // Decryption: Look through the row to find where the ciphertext letter is
        for (int col = 0; col < 26; col++) {
            if (square[row][col] == target) {
                char result = 'A' + col; // The column index IS the original letter
                return islower(textChar) ? tolower(result) : result;
            }
        }
    }
    return textChar; // Fallback
}

// The high-level encryption loop
void encrypt(const char *plaintext, char *ciphertext, const char *key) {
    if (!checkKey(key)) {
        printf("Error: Key must contain only letters.\n");
        return;
    }

    int kLen = strlen(key);
    int j = 0; // Separate index for the key

    for (int i = 0; plaintext[i] != '\0'; i++) {
        if (isalpha(plaintext[i])) {
            // We use key[j % kLen] to keep the key rotating
            ciphertext[i] = getSubstitution(key[j % kLen], plaintext[i], true);
            j++; // Only move key forward if we processed a letter
        } else {
            ciphertext[i] = plaintext[i]; // Keep spaces/punctuation as-is
        }
    }
    ciphertext[strlen(plaintext)] = '\0'; // Always null-terminate strings!
}

// Decrypt is almost identical, but passes 'false' to getSubstitution
void decrypt(const char *ciphertext, char *plaintext, const char *key) {
    if (!checkKey(key)) return;
    int kLen = strlen(key);
    int j = 0;

    for (int i = 0; ciphertext[i] != '\0'; i++) {
        if (isalpha(ciphertext[i])) {
            plaintext[i] = getSubstitution(key[j % kLen], ciphertext[i], false);
            j++;
        } else {
            plaintext[i] = ciphertext[i];
        }
    }
    plaintext[strlen(ciphertext)] = '\0';
}
