//3-Construa um programa em C++ que determine (imprima) se um dado n�mero N inteiro (recebido atrav�s do teclado) � PAR ou �MPAR. */

#include <iostream>

int main (){
	
	int numero = 0;
	std::cout << "Digite um numero inteiro:";
	std::cin >> numero;
	
	if(numero %2==0){
		std::cout << "Par:" << numero;
		} else {
		std::cout << "Impar:" << numero;}
	
	
	return 0;
}
