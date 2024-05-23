#include <iostream>

// this is written much better than the previous one

int main()
{

    std::cout << "1.\tAdd new record.\n";
    std::cout << "2.\tDelete record.\n";
    std::cout << "3.\tView record.\n";
    std::cout << "4.\tSearch record.\n";
    std::cout << "5.\tQuit.\n";

    std::cout << "Enter your selection > ";

    int value;
    std::cin >> value;

    if (value == 1)
        std::cout << "Adding new record...\n";
    else if (value == 2)
        std::cout << "Deleting record...\n";
    else if (value == 3)
        std::cout << "Viewing...\n";
    else if (value == 4)
        std::cout << "Searching...\n";
    else if (value == 5)
        std::cout << "Quitting...\n";
    else
        std::cout << "Invalid option.\n";

}