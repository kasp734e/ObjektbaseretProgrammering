#include "iostream"
#include "Exercise2.h"
int main() {
    
    int userInput;
    int outputInt = 0;
    std::cout << "Please input a positive integer: ";
    std::cin >> userInput;

    std::cout << sumAllInts(userInput);
    return 0;
}