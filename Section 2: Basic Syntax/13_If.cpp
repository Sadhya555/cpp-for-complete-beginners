#include <iostream>

// slightly edited the code to what I prefer

int main()
{
    
    std::cout << "Enter your password > ";

    std::string input;
    std::cin >> input;

    if (input == "password")
        std::cout << "Password accepted.\n";
    if (input != "password")
        std::cout << "Access denied.\n";

}