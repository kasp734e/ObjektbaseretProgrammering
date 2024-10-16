// Write a program that returns the first letter to appear twice in a string composed with 
// an alphabet containing only lowercase english letters (a-z or 0x61-0x7A in ASCII).

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

}

int main() {
    std::string input;
    std::cout << "Please write a string composed of only lowercase letters:" << std::endl;
    std::cin >> input;

    std::cout << input.length() << std::endl; 
    std::cout << firstRepeatedChar(input);
}