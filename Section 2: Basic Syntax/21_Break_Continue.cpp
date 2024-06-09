#include <iostream>

int main()
{

	/* break
		
		for (int i=0; i<5; ++i){
			std::cout << "i is: " << i << '\n';
			if (i == 3)
			break;
			}
		std::cout << "Looping...\n";

		for (int i=0; i<5; ++i){
			std::cout << "i is: " << i << '\n';
			if (i == 3)
			continue;
			}
		std::cout << "Looping...\n";

	*/

	const std::string password = "hello";

	std::string input;

	do {
		std::cout << "Enter your password > ";
		std::cin >> input;

		if (input == password)
			break;
		else
			std::cout << "Access denied.\n";
	} while (true);

	std::cout << "Password accepted\nProgram quitting...\n";
}