#include <iostream>

int main()
{
    
    int value = 4;

    switch (value) {
    case 4:
        std::cout << "Value is 4\n";
        break;
    case 5:
        std::cout << "Value is 5\n";
        break;
    case 6:
        std::cout << "Value is 6\n";
        break;
    default:
        std::cout << "Unrecognized value\n";
        break;
    }

}