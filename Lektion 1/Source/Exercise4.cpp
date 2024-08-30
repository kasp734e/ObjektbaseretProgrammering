// Jeg kan ikke komme ind i Codespaces

#include <iostream>
#include <cmath>

double volume(double radius) {
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    return volume;
}

double area(double radius) {
    double area = M_PI * pow(radius, 2);
    return area;
}

double geoRatio(double radius) {
    double ratio = volume(radius) / area(radius);
    return ratio;
}

int main() {
    double radius;
    std::cin >> radius;
    geoRatio(radius);
    std::cout << "The geometric ratio of a sphere with radius " << radius << " is " << geoRatio(radius) << std::endl;     
    return 0;
}