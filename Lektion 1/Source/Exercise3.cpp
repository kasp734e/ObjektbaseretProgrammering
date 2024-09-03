#include <iostream>
#include <cmath>

double calculateVerticalDistance(double v0, double theta, double g, double x) {
    // Convert theta from degrees to radians
    double thetaRad = theta * M_PI / 180.0;

    // Calculate the vertical distance using the formula
    double distance = (v0 * v0 * sin(2 * thetaRad)) / g * x;

    return distance;
}

int main() {
    double startSpeed = 5.0; // m/s
    double angle = 45.0; // degrees
    double mass = 100.0; // kg
    double gravity = 9.8; // m/s^2
    double distance = 10.0; // meters

    double verticalDistance = calculateVerticalDistance(startSpeed, angle, mass * gravity, distance);

    std::cout << "Vertical distance: " << verticalDistance << " meters" << std::endl;

    return 0;
}




