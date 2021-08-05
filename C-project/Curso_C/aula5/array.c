#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
    int c[3];

    printf("O tamanho de c: %zu bytes\n", sizeof c / 3);
    printf("O numero de elementos: %zu\n", sizeof c / sizeof c[0]);

    c[0] = 'A';
    c[1] = 0x42;
    c[2] = 67;

    printf("O valor de c[0]: %d\n", c[0]);
    printf("O valor de c[1]: %d\n", c[1]);
    printf("O valor de c[2]: %d\n", c[2]);

    printf("O endereco do array c em memoria: %p\n", c);
    printf("O endereco do array &c em memoria: %p\n", &c);
    printf("O endereco do primeiro elemento do array &c[0] em memoria: %p\n", &c[0]);
    printf("O endereco do segundo elemento do array &c[1] em memoria: %p\n", &c[1]);

    return 0;
}