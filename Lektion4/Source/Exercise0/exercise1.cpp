#include "iostream"
#include "vector"
#include "tuple"

// Given a speed measurement speed limit and a vehicle type, calculate the base penalty using Table 1
// If the speed measurement are 140 km/t or above, calculate an additional high speed penalty using Table 2
using namespace std;

// def penalty tables
const int penTable100[10][3] = {
    {101, 119, 1200}, {120, 129, 1800}, {130, 139, 2400}, {140, 149, 3000}, {150, 159, 3600},
    {160, 169, 4200}, {170, 179, 5400}, {180, 189, 6000}, {190, 199, 7800}, {200, 1000, 9000}
};

const int penTable110[10][3] = {
    {111, 130, 1200}, {132, 142, 1800}, {143, 152, 2400}, {154, 164, 3000}, {165, 175, 3600},
    {176, 186, 4200}, {187, 197, 5400}, {198, 208, 6000}, {209, 219, 7800}, {220, 1000, 9000}
};

const int penTable120[10][3] = {
    {121, 140, 1200}, {144, 153, 1800}, {156, 165, 2400}, {168, 178, 3000}, {180, 190, 3600},
    {192, 202, 4200}, {204, 214, 5400}, {216, 226, 6000}, {228, 238, 7800}, {240, 1000, 9000}
};

const int penTable130[10][3] = {
    {131, 150, 1200}, {156, 165, 1800}, {169, 178, 2400}, {182, 193, 3000}, {195, 205, 3600},
    {208, 218, 4200}, {221, 231, 5400}, {234, 244, 6000}, {247, 257, 7800}, {260, 1000, 9000}
};
const int additionalTable[9][3] = {
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

const int penTable30[10][3] = {
    {31, 35, 1200},
    {36, 38, 1800},
    {39, 41, 1800},
    {42, 44, 2400},
    {45, 47, 2400},
    {48, 50, 3000},
    {51, 53, 3600},
    {54, 56, 4200},
    {57, 59, 5400},
    {60, 1000, 6000}
};

const int penTable40[10][3] = {
    {41, 47, 1200},
    {48, 51, 1800},
    {52, 55, 1800},
    {56, 59, 2400},
    {60, 63, 2400},
    {64, 67, 3000},
    {68, 71, 3600},
    {72, 75, 4200},
    {76, 79, 5400},
    {80, 1000, 6000}
};

const int penTable45[10][3] = {
    {46, 53, 1200},
    {54, 58, 1800},
    {59, 62, 1800},
    {63, 67, 2400},
    {68, 71, 2400},
    {72, 76, 3000},
    {77, 80, 3600},
    {81, 85, 4200},
    {86, 89, 5400},
    {90, 1000, 6000}
};

const int penTable50[10][3] = {
    {51, 59, 1200},
    {60, 64, 1800},
    {65, 69, 1800},
    {70, 74, 2400},
    {75, 79, 2400},
    {80, 84, 3000},
    {85, 89, 3600},
    {90, 94, 4200},
    {95, 99, 5400},
    {100, 1000, 6000}
};

const int penTable60[10][3] = {
    {61, 71, 1200},
    {72, 77, 1800},
    {78, 83, 1800},
    {84, 89, 2400},
    {90, 95, 2400},
    {96, 101, 3000},
    {102, 107, 3600},
    {108, 113, 4200},
    {114, 119, 5400},
    {120, 1000, 6000}
};

const int penTable70[10][3] = {
    {71, 83, 1200},
    {84, 90, 1800},
    {91, 97, 1800},
    {98, 104, 2400},
    {105, 111, 2400},
    {112, 118, 3000},
    {119, 125, 3600},
    {126, 132, 4200},
    {133, 139, 5400},
    {140, 1000, 6000}
};

const int penTable80[10][3] = {
    {81, 95, 1200},
    {96, 103, 1800},
    {104, 111, 1800},
    {112, 119, 2400},
    {120, 127, 2400},
    {128, 135, 3000},
    {136, 143, 3600},
    {144, 151, 4200},
    {152, 159, 5400},
    {160, 1000, 6000}
};

const int penTable90[10][3] = {
    {91, 107, 1200},
    {108, 116, 1800},
    {117, 125, 1800},
    {126, 134, 2400},
    {135, 143, 2400},
    {144, 152, 3000},
    {153, 161, 3600},
    {162, 170, 4200},
    {171, 179, 5400},
    {180, 1000, 6000}
};

bool addHighSpeedPen(int speed) {
    if (speed <= 140) {
        return true;
    } else {
        return false;
    }
}

int getBasePenalty(int speedLimit, int measuredSpeed) {
    const int (*penaltyTable)[3];

    // Select the appropriate table based on the speed limit
    switch(speedLimit) {
        case 30: penaltyTable = penTable30; break;
        case 40: penaltyTable = penTable40; break;
        case 45: penaltyTable = penTable45; break;
        case 50: penaltyTable = penTable50; break;
        case 60: penaltyTable = penTable60; break;
        case 70: penaltyTable = penTable70; break;
        case 80: penaltyTable = penTable80; break;
        case 90: penaltyTable = penTable90; break;
        case 100: penaltyTable = penTable100; break;
        case 110: penaltyTable = penTable110; break;
        case 120: penaltyTable = penTable120; break;
        case 130: penaltyTable = penTable130; break;
        default: 
            cout << "Invalid speed limit provided." << endl;
            return -1;
    }

    for (int i = 0; i < 10; ++i) {
        if (measuredSpeed >= penaltyTable[i][0] && measuredSpeed <= penaltyTable[i][1]) {
            return penaltyTable[i][2];
        }
    }
    return -1; // Return -1 if no penalty range is found
}

int getAdditionalPenalty(int measuredSpeed) {
    for (const auto& range : additionalTable) {
        if (measuredSpeed >= range[0] && measuredSpeed <= range[1]) {
            return range[2];
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
        cout << "Please write a car type. (1, 2, 3): ";
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