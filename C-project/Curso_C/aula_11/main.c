#include <stdio.h>
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

    int i; // 4 bytes alocados para um int32
    printf("endereco de i: %p / tamanho de i: %zu\n", &i, sizeof i);

    int *p;
    printf("endereco de p: %p / tamanho de p: %zu\n", &p, sizeof p);
    
    *p = &i; //

    *p = 9;

    printf("%zu\n", sizeof(int *));

    return 0;
}