#ifndef YAES_H
#define YAES_H

#include <stdint.h>
#include <stdio.h>

static void xor_key(uint8_t *state, const uint8_t *key, ssize_t n);
static void rotate(uint8_t *in);

static void key_schedule_core(uint8_t *in, int i);
void expand_key(const uint8_t *key, uint8_t *expanded_key);

static void sub_bytes(uint8_t *in, int n);
static void sub_bytes_inv(uint8_t *in, int n);
void shift_rows(uint8_t *in);
void shift_rows_inv(uint8_t *in);
void mix_cols(uint8_t *in);
void mix_cols_inv(uint8_t *in);
static void add_round_key(uint8_t *state, const uint8_t *round_keys, int round);


void encrypt_aes(const uint8_t *p, const uint8_t *key, uint8_t *c);
void decrypt_aes(const uint8_t *c, const uint8_t *k, uint8_t *m);

#endif