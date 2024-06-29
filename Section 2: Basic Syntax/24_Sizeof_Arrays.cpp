#include <iostream>

int main()
{
    
    int values[] = { 4, 7, 3, 4 };

    std::cout << sizeof(values) << "\n";
    std::cout << sizeof(int) << "\n";

    for (int i = 0; i < sizeof(values) / sizeof(int); ++i) {
        std::cout << values[i] << " ";
    }
    std::cout << "\n";

}
