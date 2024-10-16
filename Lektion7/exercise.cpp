#include <iostream>
#include <vector>
#include <cmath>

enum vehicleType {
    BRAVO,
    HOTEL,
    ROMEO
};

struct gpsCoords {
float latitude;
float longitude;
};

struct vehicle {
std::string make;
std::string model;
vehicleType type;
gpsCoords coords;
int vehicleNumber;
};

const double EARTH_RADIUS = 6371000; // Earth's radius in meters

double toRadians(double degree) {
    return degree * M_PI / 180.0;
}

float calculateDistance(gpsCoords coords1, gpsCoords coords2) {
    double lat1 = toRadians(coords1.latitude);
    double lon1 = toRadians(coords1.longitude);
    double lat2 = toRadians(coords2.latitude);
    double lon2 = toRadians(coords2.longitude);

    double dlat = lat2 - lat1;
    double dlon = lon2 - lon1;

    double a = std::sin(dlat / 2) * std::sin(dlat / 2) +
               std::cos(lat1) * std::cos(lat2) *
               std::sin(dlon / 2) * std::sin(dlon / 2);
    double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1 - a));

    return EARTH_RADIUS * c;
}

vehicle b0 = { "BMW", "M3", BRAVO, { 56.08879136135274, 10.2233311613884 }, 1 }; // Moesgaard Museum
vehicle b1 = { "Volkswagen", "Golf", BRAVO, { 56.127760815765505, 10.20281162730732 }, 2 }; // Marselisborg Palace
vehicle b2 = { "Honda", "Accord", BRAVO, { 56.17100325888462, 10.19929977544253 }, 3 }; // Aarhus University
vehicle h1 = { "Volkswagen", "Golf", HOTEL, { 56.15255312320674, 10.203038127629382 }, 6 }; //Aarhus City Hall
vehicle h2 = { "Fiat", "500", HOTEL, { 56.16217140423636, 10.18949261907776 }, 1 }; // Botanical Garden and Greenhouses
vehicle r0 = { "Fiat", "500", ROMEO, { 56.153889095359624, 10.199705269637143 }, 4 }; // ARoS Aarhus Art Museum
vehicle r1 = { "Honda", "Civic", ROMEO, { 56.150191891576384, 10.204729114263282 }, 2 }; // Aarhus Central Station

std::vector<vehicle> fleet = { b0, b1, b2, h1, h2, r0, r1 };


std::string typeToString(vehicleType x) {
    switch(x) {
        case BRAVO: return "BRAVO";
        case HOTEL: return "HOTEL";
        case ROMEO: return "ROMEO";
        default: return "ERROR";
    } 
}

int main() {
    gpsCoords inputCoords;

    std::cout << "Input coordinates (format: latitude, longitude): ";
    std::string input;
    std::getline(std::cin, input);
    size_t commaPos = input.find(',');
    if (commaPos != std::string::npos) {
        inputCoords.latitude = std::stof(input.substr(0, commaPos));
        inputCoords.longitude = std::stof(input.substr(commaPos + 1));
    } else {
        std::cerr << "Invalid input format" << std::endl;
        return 1;
    }

    vehicle closestVehicle;
    float smallestDistanceYetSeen = 100000000000000;
    for (vehicle bil : fleet) {
        float distance = calculateDistance(bil.coords, inputCoords);
        if (distance < smallestDistanceYetSeen) {
            smallestDistanceYetSeen = distance;
            closestVehicle = bil;
        }
    }
    std::cout << typeToString(closestVehicle.type) << " "<< closestVehicle.vehicleNumber <<" ("<<closestVehicle.make <<" " << closestVehicle.model<< ") ";
    std::cout << smallestDistanceYetSeen << std::endl;
    
    return 0;
}