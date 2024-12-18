#include <iostream>
#include <vector>
#include "ocurrence.h"
int main(int argc, char** argv) {
  std::cout << "Opgave 2" << std::endl;

  // Test data for Opgave 2 b)
  std::vector<int> test_1 = { 1, 1, 1, 1 };
  std::vector<int> test_2 = { 31, 43, 1, 53, 43, 10, 37, 87, 37, 43, 21 };

  // opgave 2b
  
  std::cout << ocurrence(test_1, 1) << std::endl;
  std::cout << ocurrence(test_2, 43) << std::endl;

  // Test data for Opgave 2 d)
  int test_3[] = { 1, 1, 1, 1 };
  int test_4[] = { 31, 43, 1, 53, 43, 10, 37, 87, 37, 43, 21 };

// opgave 2d findes ikke men det her er testen for 2c

    int test3result;
    int* test3result_p = &test3result;

    int test4result;
    int* test4result_p = &test4result;

    ocurrence(test_3, 4, 1, test3result_p);
    ocurrence(test_4, 11, 43, test4result_p);
    std::cout << test3result << std::endl;
    std::cout << test4result << std::endl;

  return 0;
}
