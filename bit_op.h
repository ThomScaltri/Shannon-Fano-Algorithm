
#ifndef LZS_BIT_OP_H
#define LZS_BIT_OP_H

#include <stdio.h>

typedef unsigned char uc;
typedef unsigned int ui;

#define BITS 8

/*
 * IMPORTANT: The first four procedures were been adapted by an example on iCorsi platform.
 */

static void reset_bit(uc* byte,ui pos);
static void set_bit(uc* byte,ui pos);
void modify_bit(uc* byte, ui pos, ui bit);
uc get_bit_status(uc byte,ui pos);

//codice duplicati
// Set the i-th bit to 1
void setBit(uc* byte, uc bit_number);

// Set the i-th bit to 0
void clearBit(uc* byte, uc bit_number);

// Complement i-th bit
void toggleBit(uc* byte, uc bit_number);

// Get the status of i-th bit, returns 0 or 1
uc bitStatus(uc* byte, uc bit_number);
/*
 * TEST
 */
void print_bits(uc byte);

#endif //LZS_BIT_OP_H
