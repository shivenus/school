#ifndef CIPHER_H
#define CIPHER_H

#include <stdbool.h>

// Prototypes: These tell the compiler "I will define these later in cipher.c"
// const char * means we promise not to change the original input text
void encrypt(const char *plaintext, char *ciphertext, const char *key);
void decrypt(const char *ciphertext, char *plaintext, const char *key);

#endif
