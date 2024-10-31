#include <iostream>
#include <cmath>

class triangle {
public:
    double a;
    double b;
    double c;

    // Default constructor
    triangle() : a(0), b(0), c(0) {}

    // Parameterized constructor
    triangle(double setterA, double setterB, double setterC) {
        if (ineqTheom(setterA, setterB, setterC)) {
            a = setterA;
            b = setterB;
            c = setterC;
        } else {
            std::cout << "These sides are not valid for a triangle" << std::endl;
        }
    }

    void setSides(double setA, double setB, double setC) {
        if (ineqTheom(setA, setB, setC)) {
            a = setA;
            b = setB;
            c = setC;
        } else {
            std::cout << "These sides are not valid for a triangle" << std::endl;
        }
    }

    double circumference() {
        return (a + b + c);
    }

    double area() {
        return sqrt(semiPerimeter() * (semiPerimeter() - a) * (semiPerimeter() - b) * (semiPerimeter() - c));
    }

    void print() {
        std::cout << "The sides are: " << a << ", " << b << ", " << c << std::endl;
    }

private:
    double semiPerimeter() {
        return (a + b + c) / 2;
    }

    bool ineqTheom(double sideA, double sideB, double sideC) {
        return (sideA + sideB > sideC && sideB + sideC > sideA && sideC + sideA > sideB);
    }
};

int main() {
    triangle tri1; // Uses default constructor
    tri1.print();
    std::cout << std::endl << tri1.area();
    std::cout << std::endl;
    triangle tri2(3, 4, 5); // Uses parameterized constructor
    tri2.print();
    std::cout << std::endl << tri2.area();

    return 0;
}