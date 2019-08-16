#include <stdlib.h>
#include <stdio.h>

// Compile with: gcc -m32 -mpreferred-stack-boundary=2 example7.c -o example7

int main()
{
    int magicKey = 0;
    int *pmagicKey = &magicKey;
    char buffer[64] = {0};
    printf("magicKey is at %p\n", &magicKey);
    fgets(buffer, sizeof(buffer), stdin);
    printf(buffer);
    if (magicKey != 0) { printf("You win (magicKey = %d)!\n", magicKey); }
    else { printf("You didn't win. (magicKey = %d)\n", magicKey); }
    return 0;
}

