#include <iostream>

int main()
{

    int Cats = 5;
    int Dogs = 7;
    int Animals = Cats + Dogs;

    std::cout << "Number of cats: " << Cats << '\n';
    std::cout << "Number of dogs: " << Dogs << '\n';
    std::cout << "Total number of animals: " << Animals << '\n';

    std::cout << "New dog acquired!\n";

    Dogs = Dogs + 1;

    std::cout << "New number of dogs: " << Dogs;

}
