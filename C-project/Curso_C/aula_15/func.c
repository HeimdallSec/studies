#include <stdio.h>
#include <stdlib.h>

// return_type name(type_arg1 name_arg1, type_arg2 name_arg2)



void saida(void) {
    printf("Saindo do programa.");
    exit(0);
}

int soma(int n1, int n2, int n3) {
    int res;
    res = n1 + n2 + n3;
    return res; // podia retornar a soma diretamente.
}

int main(void) {
    int num1, num2, num3;

    printf("Digite o num1: ");
    scanf("%d", &num1);
    if (num1 > 50) {
        saida();
    }
    printf("Digite o num2: ");
    scanf("%d", &num2);
    if (num2 > 50) {
        saida();
    }
    printf("Digite o num3: ");
    scanf("%d", &num3);
    if (num3 > 50) {
        saida();
    }

    printf("Soma: %d\n", soma(num1, num2, num3)); // função retorna res, res é impresso em %d.

    printf("O endereco da funcao soma() eh: %p\n", soma);

    return 0;
}
