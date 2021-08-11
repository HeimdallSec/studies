#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int *p;

    p = malloc(sizeof(int));
    *p = 9;

    printf("%d\n", *p);

    free(p);

    return 0;
}