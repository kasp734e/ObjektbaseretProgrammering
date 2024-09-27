#include <iostream>
#include <cmath>


double calculateArea(int x) {
    return M_PI * std::pow(x, 2);
}

double calculateArea(int x, int y) {
    return x * y;
}

double calculateArea(int x, int y, int z) {
    double s = (x + y + z) / 2.0;
    return std::sqrt(s * (s - x) * (s - y) * (s - z));
}

int main () {
    system("clear");
    int x, y, z;
    std::cin >> x >> y >> z;

    std::cout << "Circle area: " << calculateArea(x) << std::endl;
    std::cout << "Square area: " << calculateArea(x,y) << std::endl;
    std::cout << "Triangle area: " << calculateArea(x,y,z) << std::endl;

    return 0;
}