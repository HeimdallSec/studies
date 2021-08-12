#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(ptr, size) { \
    ptr = malloc(size); \
    if (ptr == NULL) { \
        fprintf(stderr, "MEMORIA INSUFICIENTE!\n"); \
        exit(1); \
    } \
}

void *malloc_s(size_t size) {
    void *ptr;
    if (ptr == NULL) {
        fprintf(stderr, "MEMORIA INSUFICIENTE!\n");
        exit(1);
    }
    return ptr;
}

int main(int argc, char *argv[]) {

    int *p, i;

    MALLOC(p, 5 * sizeof(int));

    memset(p, 0, 5 * sizeof(int));

    // *(p+0) = 9;
    // *(p+1) = 19;
    // *(p+2) = 29;
    // *(p+3) = 39;
    // *(p+4) = 49;

    for (i = 0; i < 6; i++) {
        printf("%d\n", *(p+i));
    }

    p = realloc(p, sizeof(int) * 6);
    *(p+5) = 20;

    free(p); // previne memory leak

    return 0;
}