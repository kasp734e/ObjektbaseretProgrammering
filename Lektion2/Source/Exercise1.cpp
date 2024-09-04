#include <iostream>

bool isPositive(int i) {
    if (i >= 0) {
        return true;
    } else {
        return false;
    }
}

bool isEven(int i) {
    if (i % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int inputInt;
    std::cout << "Please input an integer: ";
    std::cin >> inputInt;
    
    if (inputInt == 0) {
        std::cout << "The number is zero";
    } else if (isPositive(inputInt) && isEven(inputInt)) {
        std::cout << "The number is positive and even.";
    } else if (isPositive(inputInt) && !isEven(inputInt)) {
        std::cout << "The number is positive and odd.";
    } else if (!isPositive(inputInt) && isEven(inputInt)) {
        std::cout << "The number is negative and even.";
    } else {
        std::cout << "The number is negative and odd.";
    }
    
    return 0;
}