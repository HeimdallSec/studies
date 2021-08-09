#include <stdio.h>

void imprime(char *pointer) {
    while (*pointer != "\0")
        putchar(*pointer++);
}

int main(void) {

    int a[] = {2017, 2018, 2019};

    for (int i = 0; i < 3; i++) {
        printf("%d\n", a[i]);
    }

    printf("O endereco da variavel 'a' em memoria eh: %p\n", a);
    printf("O valor do endereco de memoria de 'a' eh: %d\n", *a);
    // Pois o primeiro elemento de um array eh o primeiro endereco de memoria
    // Visto que um array cria uma sequencia de valores,
    // ele tambem cria um endereco de memoria de forma sequencial
    // para cada um desses valores iniciado pelo elemento 0.

    int a1 = 2020;

    printf("\nO endereco da variavel 'a1' em memoria eh: %p\n", &a1);

    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(a + i));
        // *a (int) somado com o tipo de 1 (int) resultara
        // no proximo elemento do array, visto que uma
        // variavel do tipo int tem 4 bytes nesta arquitetura.
    }

    int i = 2017;
    int *p;

    p = &i;

    printf("\nO endereco da variavel 'i' em memoria eh: %p\n", &i);
    printf("O endereco da variavel 'i' em memoria eh: %p\n", p);
    printf("O valor de 'i' eh: %d\n", i);
    printf("O valor de 'p' eh (endereco de i): %p\n", p);
    printf("O valor de '*p' eh: %d\n\n", *p); // recupera o valor do endereco de p

    char *s = "texto"; // string - array de caractere
    puts(s);

    int ab[2];

    ab[0] = 2017;
    ab[1] = 2018;

    printf("a[0] = %d\na[1] = %d\n", *ab, *ab + 1); // recupera o valor em memoria
                                                    // recupera o valor em memoria e soma + 1

    char *u = "\ngenisvaldo\n";

    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);
    u++;
    putchar(*u);

    char *pointer = "uma frase grande aleatoria sem lorem ipsum dessa vez";

    imprime(pointer);

    // Sem um asterisco, o ponteiro faz referência a um local da memória.
    // Com um asterisco, o ponteiro faz referência ao valor naquele local da memória.
    // No uso, o * no uso do ponteiro é o operador de indireção
    // Sempre use o mesmo tipo de ponteiro que as variáveis ​​que examina: floats para floats , ints para ints e assim por diante.
    // Lembre-se: inicialize um ponteiro antes de usá-lo! Defina o ponteiro igual ao endereço de alguma variável na memória.

    return 0;
}