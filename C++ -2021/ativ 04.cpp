// 4-Escreva um programa em C++ para determinar se um dado n�mero N (recebido atrav�s do teclado) � POSITIVO, NEGATIVO ou NULO.*/

#include <iostream>

int main (){
	
	int valor_01;
	std::cout << "Digite um numero:";
	std::cin >> valor_01;
	
	if (valor_01 > 0){
		std::cout << ("Positivo");
	}
	else
	if (valor_01 < 0){
		std::cout << ("Negativo");
	}
	else{
	
		std::cout <<("Nulo");
	}
		
		
	return 0;
}




