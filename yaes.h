#ifndef YAES_H
#define YAES_H

#include <stdint.h>
#include <stdio.h>

#define AES_BLOCK_SIZE 16

typedef struct {
    size_t keylen;
    uint8_t round_keys[176];
    uint8_t iv[AES_BLOCK_SIZE];
} AES_KEY;

void aes_expand_key(uint8_t *expanded_key, const uint8_t *key);

void aes_set_key(const uint8_t *keybuf, size_t len, AES_KEY *key);

void aes_gen_iv(uint8_t *iv);

void aes_encrypt(uint8_t *buf, const AES_KEY *key);

void aes_decrypt(uint8_t *buf, const AES_KEY *key);

size_t pkcs7_padded_length(const size_t len);

void pkcs7_pad(const unsigned char *in, size_t input_len, unsigned char *out, size_t output_len);

void
aes_cbc_encrypt(const unsigned char *in, unsigned char *out, const size_t len, const AES_KEY *key, const uint8_t *iv);

void
aes_cbc_decrypt(const unsigned char *in, unsigned char *out, const size_t len, const AES_KEY *key, const uint8_t *iv);


#endif