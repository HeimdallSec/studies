#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
    float f = 1.0;
    double d = 1.0;
    long double ld = 1.0;

    printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8);
    printf("O tamanho de d (double): %zu bytes / %zu bits\n", sizeof d, sizeof d * 8);
    printf("O tamanho de ld (long double): %zu bytes / %zu bits\n", sizeof ld, sizeof ld * 8);

    printf("O valor de f (float): %.2f\n", f);
    printf("O valor de d (double): %.2g\n", d);
    printf("O valor de ld (long double): %.2g\n", ld);

    return 0;
}