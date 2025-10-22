#include <iostream>

int main() {
    int numerosecreto = 5;
    int intento;

    do {
        std::cout << "adivina el numero (entre 1 a 10): ";
        std::cin >> intento;

        if (intento != numerosecreto) {
            std::cout << "intenta de nuevo" << std::endl;
        }
        
    } while (intento != numerosecreto);

    std::cout << "ganaste, numero ADIVINADO" << std::endl;

    return 0;
}