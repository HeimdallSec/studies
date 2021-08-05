#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool b, b1;
    b = true;
    b1 = false;

    printf("O tamanho de (b): bytes %zu / bits %zu\n", sizeof b, sizeof b * 8);
    printf("O valor de (b): %i\n", b);  // true
    printf("O valor de (b1): %i\n", b1);  // false

    return 0;
}