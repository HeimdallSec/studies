#include <stdio.h>
#include <stdbool.h>

void imprime(char *s) {
    while (*s) {
        putchar(*s++);
    }
}

int main(void) {
    char u[] = {0x66, 0x65, 0x72, 0x6e, 0x61, 0x6e, 0x64, 0x6f, '\n', 0x00};

    // puts(u);

    imprime(u);

    return 0;
}
