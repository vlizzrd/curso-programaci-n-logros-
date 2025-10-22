
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int a = 4, b = 4;
	int suma = a + b;
	cout << "la suma de 4 +4 es: " << suma << endl;


	int numero1 = 5, numero2 = 3;
	int resta = numero1 - numero2;
	cout << "la resta de 5 - 3 es: " << resta << endl;

	int num1 = 2, num2 = 2;
	int multiplicacion = num1 * num2;
	cout << " la multiplicacion de 2 * 2  es:  " << multiplicacion << endl;

	int nu1 = 4, nu2 = 2;
	int division = nu1 / nu2;
	cout << "la division de 4 / 2 es: " << division << endl;


	double numero = 40.0;
	double base = 2.0;
	double exponente = 6.0;
	
	double potencia = pow(base, exponente);
    std::cout << base << " elevado a " << exponente << " es " << potencia << std::endl;

	double raiz = sqrt(numero);
	std::cout << "la raiz cuadrada de " << numero << " es " << raiz << std::endl;
	
	
	
	



	return 0;
}