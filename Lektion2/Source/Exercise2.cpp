#include <iostream>

int main() {
    int mAInput;
    int ohmInput;
    std::cout << "Input a current in mA: ";
    std::cin >> mAInput;
    std::cout << "Input a resistance in ohms: ";
    std::cin >> ohmInput;
    std::cout << std::endl;

    int volts = mAInput * ohmInput;
    int watts = volts * mAInput;

    std::cout << "The voltage over the resistor is: " << volts << std::endl;
    std::cout << "The dissipated effect of the resistor is: " << watts << std::endl;

    return 0;
}