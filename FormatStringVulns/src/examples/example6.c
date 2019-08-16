#include <stdlib.h>
#include <stdio.h>

// Compile with: gcc -m32 -mpreferred-stack-boundary=2 example6.c -o example6

int main()
{
    int secret1 = 0x11111111;
    int secret2 = 0x22222222;
    int secret3 = 0x33333333;
    char buffer[64] = {0};
    fgets(buffer, sizeof(buffer), stdin);
    printf(buffer);
    if (atoi(buffer) == secret1 || atoi(buffer) == secret2 || atoi(buffer) == secret3)
        puts("Hey, you found a secret!\n");
    return 0;
}

