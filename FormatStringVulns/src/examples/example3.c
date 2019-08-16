#include <stdio.h>

// Compile with: gcc example3.c -o example3

int main(int argc, char* argv[]) {
    int number = 0;
    printf("Value of number = %d\n", number);
    printf("LunchCTF%n\n", &number);
    printf("Value of number = %d\n", number);
    return 0;
}

