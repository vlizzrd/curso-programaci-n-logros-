/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <string>

int main() {
    std::string nombre;
    std::cout << "introduce tu nombre";
    std::cin >>nombre;
    
    std::cout <<"tu nombre es "<< nombre <<"." << std::endl;

std::string apellido;
    std::cout << "introduce tu apellido";
    std::cin >>apellido;
    
    std::cout <<"tu apellido es "<< apellido <<"." << std::endl;
    
    std::string edad;
    std::cout << "introduce tu edad";
    std::cin >>edad;
    std::cout <<"tienes "<< edad <<" años de edad" << std::endl;
    
    


    return 0;
}