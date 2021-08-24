#include <stdio.h>
#include <string.h>

union st { // Maior byte é prioritário. se int for 7E1, então o byte 1 (menor) é E1. 
    unsigned char id;
    unsigned int num;
};

int main(void) {
    union st s;

    s.num = 2021;
    printf("s.num: %d\n", s.num);

    // memset(&s, 1, sizeof(union st));
    // printf("s.num: %d\n\n", s.num);

    printf("sizeof(union st): %zu\n\n", sizeof(union st));

    s.id = 0xe6; // alterei id, logo o primeiro byte de st (linha 4) será alterado, já que ele é o próprio.
    printf("s.id: %d\n", s.id);
    printf("s.num: %d\n", s.num); // então, num (linha 12) também vai ser alterado por fazer parte de st.
    
    return 0;
}
