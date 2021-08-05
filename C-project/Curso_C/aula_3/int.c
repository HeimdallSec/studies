#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
    // unsigned
    uint8_t i = UCHAR_MAX;
    uint16_t i16 = USHRT_MAX;
    uint32_t i32 = UINT_MAX;
    // signed
    int8_t ii = CHAR_MAX;
    int16_t ii16 = SHRT_MAX;
    int32_t ii32 = INT_MAX;
    // short
    short int iii = SHRT_MAX;
    // long
    long int iiii = LONG_MAX;
    // long long
    long long iiiii = LLONG_MAX;
    // size_t (retorna sizeof )
    size_t iiiiii = SIZE_MAX;
    // register
    register int iiiiiii = INT_MAX;
    
    // uint8_t
    printf("O tamanho de i (uint): %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
    printf("O valor de i (uint): %u\n", i);
    // uint16_t
    printf("O tamanho de i16 (uint): %zu bytes / %zu bits\n", sizeof i16, sizeof i16 * 8);
    printf("O valor de i16 (uint): %u\n", i16);
    // uint32_t
    printf("O tamanho de i32 (uint): %zu bytes / %zu bits\n", sizeof i32, sizeof i32 * 8);
    printf("O valor de i32 (uint): %u\n", i32);
    // int8_t
    printf("O tamanho de ii (int): %zu bytes / %zu bits\n", sizeof ii, sizeof ii * 8);
    printf("O valor de ii (int): %i\n", ii);
    // int16_t
    printf("O tamanho de ii16 (int): %zu bytes / %zu bits\n", sizeof ii16, sizeof ii16 * 8);
    printf("O valor de ii16 (int): %i\n", ii16);
    // int32_t
    printf("O tamanho de ii32 (int): %zu bytes / %zu bits\n", sizeof ii32, sizeof ii32 * 8);
    printf("O valor de ii32 (int): %i\n", ii32);
    // short int
    printf("O tamanho de iii (short int): %zu bytes / %zu bits\n", sizeof iii, sizeof iii * 8);
    printf("O valor de iii (short int): %d\n", iii);
    // long int
    printf("O tamanho de iiii (long int): %zu bytes / %zu bits\n", sizeof iiii, sizeof iiii * 8);
    printf("O valor de iiii (long int): %lu\n", iiii);    
    // long long
    printf("O tamanho de iiiii (long long int): %zu bytes / %zu bits\n", sizeof iiiii, sizeof iiiii * 8);
    printf("O valor de iiiii (long long int): %llu\n", iiiii);
    // size_t
    printf("O tamanho de iiiiii (size_t int): %zu bytes / %zu bits\n", sizeof iiiiii, sizeof iiiiii * 8);
    printf("O valor de iiiiii (size_t int): %zu\n", iiiiii);
    // register int
    printf("O tamanho de iiiiiii (register int): %zu bytes / %zu bits\n", sizeof iiiiiii, sizeof iiiiiii * 8);
    printf("O valor de iiiiiii (register int): %d", iiiiiii);

    return 0;
}