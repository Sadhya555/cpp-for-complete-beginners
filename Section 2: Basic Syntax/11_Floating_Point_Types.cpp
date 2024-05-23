#include <iostream>
#include <iomanip>      // input output manipulation

int main()
{
    
    float fValue = 123.456789;

    std::cout << "Sizeof float: " << sizeof(float) << '\n';
    std::cout << std::setprecision(20) << std::fixed << fValue << '\n';

    double dValue = 123.456789;
    std::cout << std::setprecision(20) << std::fixed << dValue << '\n';

    long double lValue = 123.456789876543210;
    std::cout << std::setprecision(20) << std::fixed << lValue << '\n';
    std::cout << "Sizeof long double: " << sizeof(lValue) << '\n';

}