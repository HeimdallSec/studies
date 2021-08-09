#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// int argc == Quantidade de argumentos
//     Variável do tipo inteiro
// char *argv[] == Argumentos da função
//     Ponteiro para string (Array/Ponteiro de caracteres)
// char *envp[] == Variáveis de ambiente
//     Ponteiro para string (Array/Ponteiro de caracteres)

int main(int argc, char *argv[]) {

    // if (argc < 2) {
    //     printf("Digite um ip!\n");
    // }
    // else if (argc > 2) {
    //     printf("Somente suporto um ip, seu doido!");
    // }

    int i = 27; // 4 bytes alocados para um int32 com valor 27
    printf("endereco de i: %p / tamanho de i: %zu\n", &i, sizeof i);

    int *ptr;
    printf("endereco de ptr: %p / tamanho de ptr: %zu\n\n", &ptr, sizeof ptr);

    ptr = &i;
    printf("conteudo de p (&i): %d\n", *ptr);
    printf("endereco de p (&p): %p\n\n", &ptr);

    int *pptr;
    printf("endereco de pptr (&pptr): %p\n", &pptr);

    pptr = ptr;
    printf("conteudo de pptr (ptr): %d\n\n", *pptr);

    int **ptopptr;
    printf("endereco de ptopptr: %p\n", &ptopptr);

    ptopptr = pptr;
    printf("conteudo de ptopptr (pptr): %d\n", *ptopptr);

    printf("\nAlterando o valor de i:\n\n");

    i = 9;

    printf("conteudo de ptopptr (pptr): %d\n", *ptopptr);
    printf("endereco de ptopptr (pptr): %p\n\n", ptopptr);

    int *j = NULL;

    j = malloc(sizeof (int));

    *j = 9;
    printf("j = %d\n", *j);
    free(j);

    return 0;
}