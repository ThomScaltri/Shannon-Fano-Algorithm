
#include "bit_op.h"
/**
 * Set 0 a bit
 * @param byte
 * @param pos of bit to write
 * STATUS: OK
 */
static void reset_bit(uc* byte,ui pos){
        *(byte) &= ~(1 << pos);
}
/**
 * Set a 1 a bit
 * @param byte
 * @param pos of bit to write
 * STATUS: OK
 */
static void set_bit(uc* byte, ui pos){
        *(byte) |= (1 << pos);
}
/**
 * Modify a bit of byte
 * @param byte
 * @param pos of a bit
 * @param bit
 * STATUS: OK
 */
void modify_bit(uc* byte, ui pos, ui bit){
    switch(bit){
        case 0:
            reset_bit(byte,pos);
        break;
        case 1:
            set_bit(byte,pos);
        break;
    }
}
/**
 * Get the status of test_1 bit
 * @param byte  to read
 * @param pos of bit
 * @return the bit read
 * STATUS: OK
 */
uc get_bit_status(uc byte,ui pos){
    return ((byte & 1 << pos) > 0 ? 1 : 0);
}
/**
 * Print bits of test_1 byte
 * @param byte
 * STATUS: OK
 */
void print_bits(uc byte){
    for(int i = BITS - 1; i >= 0 ; i--)
        printf("%u",get_bit_status(byte,i));
    printf("\n");
}


// Set the i-th bit to 1
void setBit(uc* byte, uc bit_number){
    (*byte) |= 1 << bit_number;
}

// Set the i-th bit to 0
void clearBit(uc* byte, uc bit_number){
    (*byte) &= ~(1 << bit_number);
}

// Complement i-th bit
void toggleBit(uc* byte, uc bit_number){
    (*byte) ^= 1 << bit_number;
}

// Get the status of i-th bit, returns 0 or 1
uc bitStatus(uc* byte, uc bit_number){
    return ((*byte & 1 << bit_number) > 0 ? 1 : 0);
}