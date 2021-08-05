#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    * = atribuicao
    * + - unarios
    * + - binarios (adicao e subtracao)
    * * / (multiplicacao e divisao)
    * % (resto da divisao)
    * ++ (incremento) (pre-incremento)
    * -- (decremento) (pre-decremento)
*/

int main(void) {
    int a;
    
    a = (4 + 2) * -3;
    a++;
    printf("%d\n", ++a);

    return 0;
    
    /*int a, b, c;
    float a1, b1, c1;
    char a2, b2, c2;
    bool a3, b3, c3;
    // int
    a = 0;
    b = 1;
    c = 2;

    printf("int (a): %lu\n", a);
    printf("int (b): %lu\n", b);
    printf("int (c): %lu\n", c);

    printf("O tamanho de int (a): bytes; %lu, bits; %lu\n", sizeof a, sizeof a * 8);
    printf("O tamanho de int (b): bytes; %lu, bits; %lu\n", sizeof b, sizeof b * 8);
    printf("O tamanho de int (c): bytes; %lu, bits; %lu\n", sizeof c, sizeof c * 8);
    // float
    a1 = 5;
    b1 = 10 / 3;
    c1 = 5.5;

    printf("float (a1): %.1f\n", a1);
    printf("float (b1): %.1f\n", b1);
    printf("float (c1): %.1f\n", c1);

    printf("O tamanho de float (a1): bytes; %lu, bits; %lu\n", sizeof a1, sizeof a1 * 8);
    printf("O tamanho de float (b1): bytes; %lu, bits; %lu\n", sizeof b1, sizeof b1 * 8);
    printf("O tamanho de float (c1): bytes; %lu, bits; %lu\n", sizeof c1, sizeof c1 * 8);
    // char
    a2 = 0x43;
    b2 = 'C';
    c2 = 67;

    printf("char (a2): %c\n", a2);
    printf("char (b2): %c\n", b2);
    printf("char (c2): %c\n", c2);

    printf("O tamanho de char (a2): bytes; %lu, bits; %lu\n", sizeof a2, sizeof a2 * 8);
    printf("O tamanho de char (b2): bytes; %lu, bits; %lu\n", sizeof b2, sizeof b2 * 8);
    printf("O tamanho de char (c2): bytes; %lu, bits; %lu\n", sizeof c2, sizeof c2 * 8);
    // bool
    a3 = 10 > 5;
    b3 = 5 > 10;
    c3 = 5 == 5;

    printf("Bool (a3): %d", a3);
    printf("Bool (b3): %d", b3);

    return 0;
    */
}