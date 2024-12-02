#include "iostream"
 int main() {
    
    int userInput;
    int outputInt = 0;
    std::cout << "Please input a positive integer: ";
    std::cin >> userInput;

    while (userInput > 0) {
        outputInt = outputInt+userInput;
        userInput = userInput-1;
    }

    std::cout << outputInt;
    return 0;
 }