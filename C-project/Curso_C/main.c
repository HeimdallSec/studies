#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

int main(void) {
    unsigned int i;
    char nome[61];

    printf("Insira uma string: ");
    gets(nome);

    for (i = 0;i < nome; i++) {
        printf("O elemento %d do array eh: %c\n", i, nome[i]);
    }

    return 0;
}