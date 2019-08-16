#include <stdio.h>
#include <stdlib.h>

// Compile with: gcc example2.c -o example2

void hey(int age) {
    printf("Hey, you're %d years old!\n", age);
    return;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("Usage: %s <age>\n", argv[0]); return -1; }
    hey(atoi(argv[1]));
    return 0;
}
