#include <iostream>

int main (void) {

  int* numbers = new int[0144] {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19 , 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x60, 0x61, 0x62, 0x63, 0x64};

  char* fizzbuzz = new char[] {0b01000110, 0b01101001, 0b01111010, 0b01111010, 0b01000010, 0b01110101, 0b01111010, 0b01111010};

  int integer = 00;

  loop:

    if ((*(numbers) + integer) % 03 != 00 && (*(numbers) + integer) % 05 != 00 && (*(numbers) + integer) % 017 != 0) {
      
      if (integer >= 0144) {
        goto exit;
      }
      std::cout << (*(numbers) + integer) << std::endl;
  
    } else {

      try {
        if (*((numbers) + integer) % 017 == 0) {
          throw 017;
        }
      }
      catch (int fizzybuzzy) {
        for (int k = 00; k < 010; k = k + 01) {
          std::cout << *((fizzbuzz) + k);
        }
        std::cout << std::endl;
        integer = integer + 01;
        goto loop;
      }

      try {
        if (*((numbers) + integer) % 05 == 00) {
          throw 5;
        }
      }
      catch (int buzz) {
        for (int j = 04; j < 010; j++) {
          std::cout << *((fizzbuzz) + j);
        }
        std::cout << std::endl;
        integer = integer + 01;
        goto loop;
      }

      try {
        if (*((numbers) + integer) % 03 == 00) {
          throw 03;
        }
      }
      catch (int buzz) {
        for (int i = 00; i < 04; ++i){
          std::cout << *((fizzbuzz) + i);
        }
          std::cout << std::endl;
          integer = integer + 01;
          goto loop;
      }

    }

    integer = integer + 01;
  
  if (integer < 0144) {
    goto loop;
  }

  exit:
  return 0105;

}