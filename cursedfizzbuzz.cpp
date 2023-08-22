#include <iostream>
#include <vector>

int main (void) {

  int* numbers = new int[100] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

  char* fizzbuzz = new char[] {'F', 'i', 'z', 'z', 'B', 'u', 'z', 'z'};

  int integer = 0;

  while (integer < 100) {

    if (numbers[integer] % 3 != 0 && numbers[integer] % 5 != 0 && numbers[integer] % 15 != 0) {

      std::cout << numbers[integer] << std::endl;
  
    } else {

      try {
        if (numbers[integer] % 15 == 0) {
          throw 15;
        }
      }
      catch (int fizzybuzzy) {
        for (int k = 0; k < 8; k = k + 1) {
          std::cout << fizzbuzz[k];
        }
        std::cout << std::endl;
        integer = integer + 1;
        continue;
      }

      try {
        if (numbers[integer] % 5 == 0) {
          throw 5;
        }
      }
      catch (int buzz) {
        for (int j = 4; j < 8; j++) {
          std::cout << fizzbuzz[j];
        }
        std::cout << std::endl;
        integer = integer + 1;
        continue;
      }

      try {
        if (numbers[integer] % 3 == 0) {
          throw 3;
        }
      }
      catch (int buzz) {
        for (int i = 0; i < 4; ++i){
          std::cout << fizzbuzz[i];
        }
          std::cout << std::endl;
          integer = integer + 1;
          continue;
      }

    }

    integer = integer + 1;

  }

  delete[] numbers;
  numbers = nullptr;

  delete[] fizzbuzz;
  fizzbuzz = nullptr;

}