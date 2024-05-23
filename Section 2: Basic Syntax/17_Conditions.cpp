#include <iostream>

int main()
{
    
    int value1 = 7;
    int value2 = 4;

    if (value1 >= 5)
        std::cout << "Condition 1: true\n";
    else
        std::cout << "Condition 1: false\n";

    if (value1 == 7 && value2 < 3)
        std::cout << "Condition 2: true\n";
    else
        std::cout << "Condition 2: false\n";

    if (value1 == 7 || value2 < 3)
        std::cout << "Condition 3: true\n";
    else
        std::cout << "Condition 3: false\n";

    if ((value2 != 8 && value1 == 10) || value1 < 10)
        std::cout << "Condition 4: true\n";
    else
        std::cout << "Condition 4: false\n";

    bool condition1 = (value2 != 8) && (value1 == 10);
    bool condition2 = value1 < 10;

    if (condition1 || condition2)
        std::cout << "Condition 5: true\n";
    else
        std::cout << "Condition 5: false\n";

}