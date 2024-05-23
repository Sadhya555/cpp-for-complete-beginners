#include <iostream>

// kinda written weirdly since apparently you need privileges to quit too

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

    if (value < 3)
        std::cout << "Insufficient privileges to use these menu options.\n";
    else
        std::cout << "Privilege level sufficient.\n";
    if (value == 5)
        std::cout << "Quitting...\n";
    else
        std::cout << "Not quitting.\n";

}