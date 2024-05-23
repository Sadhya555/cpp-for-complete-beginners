#include <iostream>

int main()
{
    
    bool bValue = true;
    std::cout << bValue << '\n';

    char cValue = 'g';
    std::cout << cValue << '\n';
    std::cout << "Size of chat: " << sizeof(char) << '\n';

    wchar_t wValue = 'i';
    std::cout << (char)wValue << '\n';
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << '\n';

}