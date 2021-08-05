#include <stdio.h>

/*
    & - "AND"
    | - "OR/OU"
    ^ - "OR/OU/XOR exclusivo"
    ! - "negacao"
    ~ - "negacao bit-a-bit"
    << - "shift left"
    >> - "shift right"
*/

int main(void) {
    int a = 0b01010101;
    int chave = 0b11;

    printf("O valor de a: %d\n", a);
    printf("O resultado eh: %d\n", a ^ chave);

    int x1 = 2; // 10
    int x2 = 3; // 11
                // 01

    printf("O valor logico de x1 && x2: %d\n", x1 ^ x2);

    int y = 0b1000; // 1000 - 10000

    printf("O resultado eh: %d\n", y << 2);

    int y1 = 0b1000; // 1000 - 0100

    printf("O resultado eh: %d\n", y1 >> 1);

    return 0;
}