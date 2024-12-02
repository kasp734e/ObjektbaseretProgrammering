#include <iostream>
#include <cmath>

int main() {
    int x1, y1, z1, x2, y2, z2;
    
    std::cout << "Enter the x component of vector 1: ";
    std::cin >> x1;
    
    std::cout << "Enter the y component of vector 1: ";
    std::cin >> y1;
    
    std::cout << "Enter the z component of vector 1: ";
    std::cin >> z1;
    
    std::cout << "Enter the x component of vector 2: ";
    std::cin >> x2;
    
    std::cout << "Enter the y component of vector 2: ";
    std::cin >> y2;
    
    std::cout << "Enter the z component of vector 2: ";
    std::cin >> z2;
    
    int distance = std::max({std::abs(x2 - x1), std::abs(y2 - y1), std::abs(z2 - z1)});
    
    std::cout << "The distance between the two vectors is: " << distance << std::endl;
    
    return 0;
}
