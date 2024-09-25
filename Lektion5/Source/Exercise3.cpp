#include <iostream>

double powerFromVoltAndOhm (double v, double r) {
    return pow(v,2) /r;
}

int main() {
      
    double v, r;

    std::cout << "This program calculates the power dissipated in a simple resistor circuit" << std::endl;
    std::cout << "Input the power source voltage [V]: " << std::endl;
    std::cin >> v;
    std::cout << "Input the resistance R [Ohm]: " << std::endl;
    std::cin >> r;

    std::cout << "The power dissipated in R is " << powerFromVoltAndOhm(v,r) << "watts [W]" << std::endl;
    
    return 0;
}