#include <stdio.h>

int main(void) {
    char c, c1, c2;
    c = 'A';
    c1 = 65;
    c2 = 0x41;

    printf("O tamanho de (char): bytes %i / bits %i\n", sizeof c, sizeof c * 8);
    printf("O valor de (c): %c - %c - %c\n", c, c1, c2);

    return 0;
}