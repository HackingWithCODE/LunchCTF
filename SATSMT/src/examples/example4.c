#include <stdint.h> // uint8_t/uint32_t
#include <stddef.h> // size_t
#include <string.h> 
#include <stdio.h>

// Compile with: gcc example4.c -o example4
// Run with: ./example4 LunchCTF

  uint32_t adler32(const void *buf, size_t buflength) {

     const uint8_t *buffer = (const uint8_t*)buf;

     uint32_t s1 = 1;
     uint32_t s2 = 0;

     for (size_t n = 0; n < buflength; n++) {
        s1 = (s1 + buffer[n]) % 65521;
        s2 = (s2 + s1) % 65521;
     }

     return (s2 << 16) | s1;
  }

  int main (int argc, char *argv[]) {

    if(argc <= 1) {
      printf("Usage: %s <string>\n", argv[0]);
      return -1;
    }

    uint32_t chksum = adler32(argv[1], strlen(argv[1]));
    printf("Adler32 checksum: 0x%08X\n", chksum);
    
    if (chksum == 0x0D7502D8) {
      printf("Check valid!\n");
    } else {
      printf("Check invalid!\n");
    }

    return 0;
  }
