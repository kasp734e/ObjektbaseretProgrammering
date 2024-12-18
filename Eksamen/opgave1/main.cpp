#include <iostream>
#include "interpolation.h"
int main(int argc, char** argv) {
  std::cout << "Opgave 1" << std::endl;

// hele filen er opgave 1d

  double x1;
  double y1;
  double x2;
  double y2;
  double x;
  double y;

  std::cout << "Enter 1st point x coordinate: ";
  std::cin >> x1;
  std::cout << "Enter 1st point y coordinate: ";
  std::cin >> y1;
  std::cout << "Enter 2st point x coordinate: ";
  std::cin >> x2;
  std::cout << "Enter 2st point y coordinate: ";
  std::cin >> y2;
  std::cout << "Enter target x coordinate: ";
  std::cin >> x;


  y = linearInterpolation(x1, x2, y1, y2, x);

  printCoordinates(x, y);

  return 0;
}
