#ifndef YAES_H
#define YAES_H

#include <stdint.h>

void expand_key(const uint8_t *key, uint8_t *expanded_key);
void encrypt_aes(const uint8_t *ptx, const uint8_t *key, uint8_t *ctx);

#endif