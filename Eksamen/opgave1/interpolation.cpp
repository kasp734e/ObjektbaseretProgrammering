#include "interpolation.h"
#include <iostream>
// opgave 1b
double linearInterpolation(double x0,double x1,double y0,double y1,double x) {
    return y0+((y1-y0)/(x1-x0))*(x-x0);

}
// opgave 1c
void printCoordinates(double x, double y) {

    std::cout << "(" << std::to_string(x) << "," << std::to_string(y) << ")" << std::endl;
}
