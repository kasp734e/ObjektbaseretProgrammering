#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

double calculateVectorMean(std::vector<int> vec) {
    double sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    double mean = sum / vec.size();
    return mean;
}

int main() {
    srand(time(0));
    int x = 0;
    int amountOfDiceRolls;
    std::cout << "How many dice rolls do you want: ";
    std::cin >> amountOfDiceRolls;
    std::vector<int> diceRolls;
    
    while (x<amountOfDiceRolls)
    {
        diceRolls.push_back(rand() % 6 + 1);
        x++;
    }
        
    std::cout << "Dice rolls mean: " << calculateVectorMean(diceRolls) << std::endl;
    
    return 0;
}