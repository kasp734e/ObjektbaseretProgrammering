#include "iostream"  
  
int main() {  
    // Define vars  
    int weight;  
    double height;  
  
    // init vars  
    weight = 83;  
    height = 1.82;  
  
    // define and init bmi var  
    double bmi = weight/(height*height);  
  
    // cout bmi and strings  
    std::cout << "bmi for weight:" << weight << " and height:" << height << " is " << bmi;  
  
    return 0;  
}