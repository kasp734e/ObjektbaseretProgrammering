//Modify the program from Exercise 0x01, so it prints the positions (indices) of the letter to the console.
//Here are some example output:
//Welcome to the wonderful world of software engineering produces the output 'e', found at indices [1, 6]
//Uncopyrightable produces the output 'Uncopyrightable' contains no duplicate characters

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