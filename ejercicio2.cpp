#include <iostream>
#include <string>

int main() {
	std::string nombre = "Ema";
	std::string segundonombre = "Luna";
	std::string apellido = "Eguis";
	std::string segundoapellido = "Bracho";

	std::string fraseCompleta = nombre + segundonombre + apellido + segundoapellido;
	std::cout << "Nombre completo: " << fraseCompleta << std::endl;
	std::string sub = fraseCompleta.substr(0, 4);
	std::cout << "subcadena extraida: " << sub << std::endl;

	return 0;
}