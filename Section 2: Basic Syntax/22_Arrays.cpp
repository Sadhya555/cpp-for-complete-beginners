#include <iostream>
#include <string>

int main()
{
    std::cout << "Array of integers\n";
    std::cout << "=================\n";

    int values[3];

    values[0] = 88;
    values[1] = 123;
    values[2] = 7;

    for (int i = 0; i < 3; ++i) {
        std::cout << values[i] << "\n";
    }

    std::cout << "\nArray if doubles\n";
    std::cout << "=================\n";

    double numbers[4] = { 4.5, 2.3, 7.2, 8.1 };

    for (int i = 0; i < 4; ++i) {
        std::cout << "Element at index " << i << ": " << numbers[i] << "\n";
    }

    std::cout << "\nInitializing with zero values\n";
    std::cout << "=================\n";

    int numberArray[8] = {};

    for (int i = 0; i < 8; ++i) {
        std::cout << "Element at index " << i << ": " << numberArray[i] << "\n";
    }

    std::cout << "\nInitializing with strings\n";
    std::cout << "=================\n";

    std::string texts[] = { "apple", "banana", "orange" };

    for (int i = 0; i < 3; ++i) {
        std::cout << "Element at index " << i << ": " << texts[i] << "\n";
    }
}