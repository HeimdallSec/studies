#include <stdio.h>

#define R 10
#define C 20

int main(void) {
    short int (p)[R][C];
    printf("%d",  sizeof(p));

    return 0;
}