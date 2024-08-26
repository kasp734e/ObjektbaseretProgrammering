#include "iostream"  
#include "cmath"  
int main() {  
    // int and def vars  
    double angle = 3.141592653589793;  
    double x = cos(angle);  
    double y = sin(angle);  
    double length = sqrt(x*x+y*y);  
  
    std::cout << length << std::endl;  
    return 0;  
}