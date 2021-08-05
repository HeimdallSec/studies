#include <stdio.h>

int main(void) {
    int a = 359;
    int chave = 3;


    if (-1 == a && a < 400) {
        printf("chave: %d\n", chave);

    }
    else if (a < 500) {
        puts("a eh menor que 500");
        if (a == 3) {
            printf("nada a ve irmao");
        }
    }
    else if (a == 359) {
        puts("a == 359");
    }
    else {
        printf("Avaliacao do if deu FALSE\n");
        puts("puts");
    }

    // ternario
    (a == 3) ? puts("3") : puts("nao sei o valor de a");

    if (a == 3)
        puts("3");
    else 
        puts("nao sei o valor de a");

    printf("a: %d\n", a);

    return 0;
}