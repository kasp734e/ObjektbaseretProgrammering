#include <iostream>
#include <cmath>
#include <fstream>

int main() {
    double v0, alpha, g = 9.82;
    
    // Get input from the user
    std::cout << "Enter the initial velocity (m/s): ";
    std::cin >> v0;
    
    std::cout << "Enter the angle of projection (degrees): ";
    std::cin >> alpha;
    
    // Convert the angle from degrees to radians
    alpha = alpha * M_PI / 180.0;
    
    // Calculate the horizontal and vertical displacements
    double t_flight = (2 * v0 * sin(alpha)) / g;
    double x_displacement = v0 * cos(alpha) * t_flight;
    double y_displacement = v0 * sin(alpha) * t_flight - 0.5 * g * pow(t_flight, 2);
    
    // Output the results
    std::cout << "Horizontal displacement: " << x_displacement << " meters" << std::endl;
    std::cout << "Vertical displacement: " << y_displacement << " meters" << std::endl;
    
    // Create a file to store the data for the graph
    std::ofstream outputFile("graph_data.txt");
    
    // Calculate the trajectory for the given parameters
    for (int angle = 5; angle <= 80; angle += 5) {
        double alpha = angle * M_PI / 180.0;
        double t_flight = (2 * v0 * sin(alpha)) / g;
        double x_displacement = v0 * cos(alpha) * t_flight;
        double y_displacement = v0 * sin(alpha) * t_flight - 0.5 * g * pow(t_flight, 2);
        
        // Write the angle and corresponding displacements to the file
        outputFile << angle << " " << x_displacement << " " << y_displacement << std::endl;
    }
    
    // Close the file
    outputFile.close();

    return 0;
}