#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // unsigned int i = 0;

    // label:

    // imprimir:
    //     printf("O valor de i eh: %u\n", i);
    //     i++;
    //     if (i < 3)
    //         goto imprimir;

    // unsigned int i;

    // iniciar variável com valor 0 para contagem.
    // for (unsigned i=0 ; i < 3; ) { // Inicialização da variável, comparação ou incremento não obrigatório!
    //     printf("O valor de i eh: %u\n", i);
    //     i++;
    // }

    // unsigned int i = 0;

    // for (unsigned int i = 0; i < 3; i++) {
    //     printf("O valor de i eh: %u\n", i);
    // }

    // unsigned int i = 0;

    // while (true) {
    //     printf("O valor de i eh: %u\n", i);
    //     i++;
    //     if (i > 10) {
    //         break;
    //     }
    //     else {
    //         continue;
    //     }   
    // }

    unsigned int i = 0;

    do printf("O valor de i eh: %u\n", i++);
    while (i < 10);


    return 0;
}