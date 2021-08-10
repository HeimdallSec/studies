#include <stdio.h>
#include <stdlib.h>

#define TAM 2

enum pedras {CAVALO=2, BISPO=3, TORRE=4, RAINHA=5};

int main(int argc, char *argv[]) {

    int tabu[TAM][TAM] = { 0 };
    int i, j;

    tabu[0][0] = CAVALO; // torre
    tabu[0][1] = BISPO; // cavalo
    tabu[1][0] = TORRE; // bispo
    *(*(tabu+1) +1) = RAINHA; // rainha

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("[%d][%d]=%d ", i, j, tabu[i][j]);
            if (j == TAM - 1)
                printf("\n");
        }
    }

    return 0;
}