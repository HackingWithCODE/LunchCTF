#include <stdio.h>

// Compile with: gcc example5.c -o example5

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("Usage: %s <string>\n", argv[0]); return -1; }
    printf("Watch this: %s\n", argv[1]);
    puts("Now Watch this...");
    printf(argv[1]);
    puts("\n");
    return 0;
}
