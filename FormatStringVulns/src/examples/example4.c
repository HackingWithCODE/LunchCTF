#include <stdio.h>

// Compile with: gcc example4.c -o example4

int main(int argc, char* argv[]) {
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;
    printf("    Numbers: %d, %d, %d, %d, %d\n", num1,num2,num3,num4,num5);
    printf("DPA Numbers: %4$d, %2$d, %1$d, %5$d, %3$d\n", num1,num2,num3,num4,num5);
    return 0;
}
