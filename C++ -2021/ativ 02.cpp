//2- Construa um programa em C++ que leia dois valores num�ricos inteiros e efetue a adi��o; caso o resultado seja maior que 10, apresent�-lo. */

#include <iostream>

int main (){
	
	float valor_1, valor_2, soma;
	
	std::cout <<"Digite o primeiro numero:";
	std::cin >> valor_1;
	
	std::cout <<"Digite o segundo numero:";
	std::cin >> valor_2;
	
	soma = valor_1 + valor_2;
	
	if (soma >10){
		std::cout <<"resultado \n"<<soma;
	}
	
	
	return 0;
}
