#include <stdio.h>
#include <string.h>
#include "cipher.h"

int main() {
    char key[100];
    char input[500];
    char encrypted[500];
    char decrypted[500];

    // Task 1: Prompt for phrase and key
    printf("Enter a phrase to encrypt: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline character

    printf("Enter a secret key (letters only): ");
    scanf("%99s", key);

    encrypt(input, encrypted, key);
    printf("\nEncrypted text: %s\n", encrypted);

    // Task 2: Decrypt it back to verify
    decrypt(encrypted, decrypted, key);
    printf("Decrypted back: %s\n", decrypted);

    // Task 3: Decrypt the book's gibberish title
    char bookTitle[] = "Pqyoaf X Nylfomigrob Qwbbfmh Mndogvk: Rboqlrut yua Boklnxhmywex";
    char decodedTitle[500];
    
    // We use the same key from Step 1 as requested (XMWUJBVYHXZ)
    decrypt(bookTitle, decodedTitle, key);
    printf("\n--- Solving the Book Mystery ---\n");
    printf("Original: %s\n", bookTitle);
    printf("Decoded:  %s\n", decodedTitle);

    return 0;
}
