#include <iostream>

void showMenu() {
    std::cout << "1. Search\n";
    std::cout << "2. View Record\n";
    std::cout << "3. Quit\n";
}

int processSelection() {
    std::cout << "Enter selection: \n";

    int input;
    std::cin >> input;

    return input;
}

int main()
{
    showMenu();
    int selection = processSelection();

    switch (selection) {
    case 1:
        std::cout << "Searching...\n";
        break;
    case 2:
        std::cout << "Viewing...\n";
        break;
    case 3:
        std::cout << "Quitting...\n";
        break;
    default:
        std::cout << "Please select an item from the menu\n";
    }
}