// What is the string contains no repeats?:

// Uncopyrightable (adjective): Not able to be protected by copyright
// Dermatoglyphics (noun): The study of skin patterns/markings, such as fingerprints
// Modify the program from Exercise 0x00 to handle the case, where there are no repeat characters in the input string.

#include <iostream>
#include <unordered_set>

char firstRepeatedChar(std::string inputString) {
    std::unordered_set<char> seenCharaters;

    for (char ch : inputString) {
        if (seenCharaters.find(ch) != seenCharaters.end()){
            return ch;
        } else {
            seenCharaters.insert(ch);
        }
    }
    std::cout << "This sting does not contain any repeats";
}

int main() {
    std::string input;
    std::cout << "Please write a string composed of only lowercase letters:" << std::endl;
    std::cin >> input;

    std::cout << input.length() << std::endl; 
    std::cout << firstRepeatedChar(input);
    return 0;
}