#include <iostream>
#include "Cat.h"

void Cat::speak() {
	if (happy) {
		std::cout << "Meow!\n";
	}
	else {
		std::cout << "Sssssss!\n";
	}
}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}