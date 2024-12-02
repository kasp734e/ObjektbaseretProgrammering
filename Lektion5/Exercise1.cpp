#include <iostream>

// function fra exercise0.cpp
int findMax3(int a, int b, int c) {
    int result;

    if (a > b || a > c) {
        result = a;
    } else if (b > a || b > c) {
        result = b;
    } else if (c > a || c > b) {
        result = c;
    }
    return result;
}
// --

int calculateFactorial(int i) {
    int facResult=1;
    while (i>1) {facResult = facResult * i; i--; }
    return facResult;
}

int main() {
    system("clear");
    int x;
    std::cout << "Write an int: ";
    std::cin >> x;
    std::cout << "The factorial of " << x << " is " << calculateFactorial(x)<< std::endl;
    return 0;
}