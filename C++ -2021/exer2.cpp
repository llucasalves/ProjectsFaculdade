/*Jogo da adivinhação.

Desenvolva um algoritmo que leia um número de 1 a 10 e compare para saber se o número digitado está correto.*/

#include <iostream>

int main()
{
	int numero, resultado = 7;
	
	std::cout << "Digite um numero de 1 a 10:";
	std::cin >> numero;
	
	if (numero==resultado){
		std::cout <<"Acertou!";
	} else{
		std::cout <<"Tente Novamente";
	}
	
	
	
	return 0;
}
