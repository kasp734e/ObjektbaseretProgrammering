#include <iostream>

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

int main() {
    int x;
    int y;
    int z;
    
    std::cout << "Skriv 3 ints: ";
    std::cin >> x >> y >> z;

    int max = findMax3(x, y, z);
    std::cout << "Max value is: " << max << std::endl;

    return 0;
}