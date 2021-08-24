#include <stdio.h>
#include <string.h>

struct st2 { // 12 bytes
    int a;
    int b;
    int c;
};

struct st { // Struct tem o tamanho da maior variável aqui presente (num ou char[4]).
    unsigned char id[4]; // 4 bytes
    unsigned int num; // 4 bytes
    struct st2 s2; // 12 bytes + 8 bytes pois num + id == 8, se id fosse menor, seria realinhado para 8 do mesmo jeito.
};

int main(void) {
    struct st s;
    int count = sizeof(char[4]);

    s.id[1] = 10;
    s.id[2] = 20;
    s.id[3] = 30;
    s.num = 2017;

    for (int i = 0; i < count; i++) {
        printf("s.id[%d]\n", s.id[i]);
    }
    
    printf("fim do for\n\n");

    printf("s.id[3]: %d | s.num: %d\n", s.id[3], s.num);

    memset(&s, sizeof(int), sizeof(struct st));

    printf("s.id[3]: %d | s.num: %d\n\n", s.id[3], s.num);

    printf("sizeof(struct st): %zu\n", sizeof(struct st));

    return 0;
}
