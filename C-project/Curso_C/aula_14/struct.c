#include <stdio.h>
#include <string.h>

union st { // maior tipo será admitido, ou id ou num (num = 4bytes, portanto admitido).
    unsigned char id;
    unsigned long int num;
};

int main(void) {
    union st s;

    s.num = 2021;

    printf("s.num: %d\n", s.num);
    printf("s.id: %d\n", s.id);



    return 0;
}