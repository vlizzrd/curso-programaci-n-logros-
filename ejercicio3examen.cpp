
#include <iostream>

int main() {
	int edad;
	std::cout << "Introduce tu edad: ";
	std::cin >> edad;

	if (edad < 18) {

		std::cout << "aun eres menor de edad" << std::endl;

	} else if (edad >= 18 && edad <= 50) {

		std::cout << "eres mayor de edad." << std::endl;
	} else {

		std::cout << "eres adulto mayor" << std::endl;
	}

	return 0;
}