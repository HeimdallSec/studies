#include <stdio.h>

int main(void) {
    int *p = {2017, 2018, 2019};
    int x = 2;

    // printf("%d\n", p);

    p = p + 0;
    printf("%d\n", p);

    return 0;
}
