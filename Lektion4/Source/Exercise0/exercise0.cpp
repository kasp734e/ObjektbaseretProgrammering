#include "iostream"
#include "vector"
#include "tuple"

// Given a speed measurement speed limit and a vehicle type, calculate the base penalty using Table 1
// If the speed measurement are 140 km/t or above, calculate an additional high speed penalty using Table 2
using namespace std;

typedef tuple<int, int, int> penaltyRange;

// def penalty tables

vector<penaltyRange> penTable100= {
    {101, 119, 1200}, {120, 129, 1800}, {130, 139, 2400}, {140, 149, 3000}, {150, 159, 3600},
    {160, 169, 4200}, {170, 179, 5400}, {180, 189, 6000}, {190, 199, 7800}, {200, 1000, 9000}
};

vector<penaltyRange> penTable110 = {
    {111, 130, 1200}, {132, 142, 1800}, {143, 152, 2400}, {154, 164, 3000}, {165, 175, 3600},
    {176, 186, 4200}, {187, 197, 5400}, {198, 208, 6000}, {209, 219, 7800}, {220, 1000, 9000}
};

vector<penaltyRange> penTable120 = {
    {121, 140, 1200}, {144, 153, 1800}, {156, 165, 2400}, {168, 178, 3000}, {180, 190, 3600},
    {192, 202, 4200}, {204, 214, 5400}, {216, 226, 6000}, {228, 238, 7800}, {240, 1000, 9000}
};

vector<penaltyRange> penTable130 = {
    {131, 150, 1200}, {156, 165, 1800}, {169, 178, 2400}, {182, 193, 3000}, {195, 205, 3600},
    {208, 218, 4200}, {221, 231, 5400}, {234, 244, 6000}, {247, 257, 7800}, {260, 1000, 9000}
};

vector<penaltyRange> additionalTable = {
{140, 149, 1200}, 
{150, 159, 1800}, 
{160, 169, 2400}, 
{170, 179, 3000}, 
{180, 189, 3600}, 
{190, 199, 4200}, 
{200, 209, 4800}, 
{210, 219, 5400}, 
{220, 229, 6000}
};

bool addHighSpeedPen(int speed) { // make the part of the program at calculates the extra penalty
    if (speed <= 140) {
        return true;
    } else {
        return false;
    }
}

int getBasePenalty(int speedLimit, int measuredSpeed) {
    vector<penaltyRange> penaltyTable;

    // Select the appropriate table based on the speed limit
    switch(speedLimit) {
        case 100: penaltyTable = penTable100; break;
        case 110: penaltyTable = penTable110; break;
        case 120: penaltyTable = penTable120; break;
        case 130: penaltyTable = penTable130; break;
        default: 
            cout << "Invalid speed limit provided." << endl;
            return -1;
    }
    for (const auto& range : penaltyTable) {
        if (measuredSpeed >= get<0>(range) && measuredSpeed <= get<1>(range)) {
            return get<2>(range);
        }
    }
    return -1; // Return -1 if no penalty range is found
}

int getAdditionalPenalty(int measuredSpeed) {
    for (const auto& range : additionalTable) {
        if (measuredSpeed >= get<0>(range) && measuredSpeed <= get<1>(range)) {
            return get<2>(range);
        }
    }
}

int main() {
    while (true) {
        system("clear");
        int bsVar;
        int speedLimit;
        int carSpeed;
        string carType; 
        cout << "Please write a car type. (Takst 2 or Takst 3): ";
        cin >> carType;

        if (carType == "2" || carType == "3") {
            system("clear");
            cout << "Takst " << carType << endl;
            cout << "Please write the speed limit of the road. (100, 110, 120, or 130 km/h): ";
            cin >> speedLimit;

            if (speedLimit == 100 || speedLimit == 110 || speedLimit == 120 || speedLimit == 130) {
                system("clear");
                cout << "Takst " << carType << ", Speed limit: " << speedLimit << endl;
                cout << "Please write the speed the car was driving: ";
                cin >> carSpeed;
                int penalty = getBasePenalty(speedLimit, carSpeed);
                if (carSpeed >= 140) {
                    penalty += getAdditionalPenalty(carSpeed);
                } 
                if (penalty != -1) {
                    cout << "The penalty is: " << penalty << endl;
                    cin.ignore();
                    cin >> bsVar;
                }

            } else {
                cout << speedLimit << " isnt a valid input.";
                cin.ignore();
            }
        } else {
            cout << "Not a valid car type" << endl;
        }
    }
return 0;
}
