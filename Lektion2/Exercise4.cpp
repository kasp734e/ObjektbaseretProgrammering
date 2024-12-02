#include "iostream"

int main() {

    double a11;
    double a12;
    double a21;
    double a22;
    std::cout << "Input the matrix values in order a11, a12, a21, a22" << std::endl;
    std::cin >> a11 >> a12 >> a21 >> a22;

    double det = a11 * a22 - a12 * a21;

    if (det == 0) {
        std::cout << "No unique solution exists. Program terminating";
    } else {
        double c1;
        double c2;
        double x;
        double y;

        std::cout << "Input the values c1, c2" << std::endl;
        std::cin >> c1 >> c2;

        x = (1/det) * (a22*c1-a12*c2);
        y = (1/det) * (-a21*c1+a11*c2);

        std::cout << "The solution is: " << x << ", " << y;
    }

    return 0;
}