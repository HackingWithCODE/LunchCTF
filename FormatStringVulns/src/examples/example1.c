#include <stdio.h>

// Compile with: gcc example1.c -o example1

void hey(char* name) {
    printf("Hey %s!\n", name);
    return;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("Usage: %s <string>\n", argv[0]); return -1; }
    hey(argv[1]);
    return 0;
}
