#include <iostream>
int main() {
    int height;
    std::cout << "Please write the height of the triangle: ";
    std::cin >> height;
    int row = 1;

    while (row <= height) {
        int spaces = height - row;
        int col = 1;

        // Print the spaces before the asterisks
        while (spaces > 0) {
            std::cout << " ";
            spaces--;
        }

        // Print the asterisks
        while (col <= (2 * row - 1)) {
            std::cout << "*";
            col++;
        }

        std::cout << std::endl;
        row++;
    }

    return 0;
}