// I didn't really need to include limits for this one

#include <iostream>

int main()
{

    int value = -54656;
    std::cout << value << '\n';

    std::cout << "Max int value: " << INT_MAX << '\n';
    std::cout << "Min int value: " << INT_MIN << '\n';

    long int lValue = 2345325345345;
    std::cout << lValue << '\n';

    short sValue = 23434;
    std::cout << sValue << '\n';

    std::cout << "Size of int: " << sizeof(int) << '\n';
    std::cout << "Size of short int: " << sizeof(short int) << '\n';

    unsigned int uValue = 2342343;
    std::cout << uValue << '\n';
}
