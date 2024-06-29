#include <iostream>

int main()
{

    std::string animals[][3]{
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };

    for (int i = 0; i < sizeof(animals)/sizeof(animals[0]); ++i) {

        for (int j = 0; j < sizeof(animals[0])/sizeof(std::string); ++j) {
            std::cout << animals[i][j] << " ";

        }
        std::cout << "\n";
    }

}