#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    char s[10] = "fernando";

    printf("%x\n", s[20]);
    printf("%x\n", *(s + 20)); // s + 29 posições a frent na memória

    printf("%x\n", 20[s]);
    printf("%x\n", *(20 + s));

    return 0;
}