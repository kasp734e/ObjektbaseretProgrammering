#include "iostream"

int main() {
    int a, b;
    std::cout << "Please write two integers:";
    std::cin >> a >> b;

    if (a>b) {
        std::cout << "The first integer is greater than the second" << std::endl;
    } else if (b>a) {
        std::cout << "The second integer is greater than the first one" << std::endl;
    } else {
        std::cout << "The numbers are equal" << std::endl;
    }
    std::cout << "The sum of the integers are: " << a+b << std::endl;
    std::cout << "The product of the integers are: " << a*b << std::endl;
    return 0;
}