#include "iostream"

bool isEven(int x) {
    if (x%2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int userInput = 0;
    std::cout << "Please write an integer: ";
    std::cin >> userInput;
    
    int i = userInput;
    int x = 1;
    while (i > x) {
        if (isEven(x)) {
            std::cout << x << " ";
        } else {}
        x++;
    } 

    return 0;
}