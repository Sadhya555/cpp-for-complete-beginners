#include <iostream>

void showMenu() {
    std::cout << "1. Search\n";
    std::cout << "2. View Record\n";
    std::cout << "3. Quit\n";
}

int getInput() {
    std::cout << "Enter selection: \n";

    int input;
    std::cin >> input;

    return input;
}

void processSelection(int option) {
    switch (option) {
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

int main()
{
    showMenu();
    int selection = getInput();
    processSelection(selection);

}