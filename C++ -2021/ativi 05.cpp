/* 5-Construir um programa em C++ que leia dois números e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se 
a ele mais 8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/ 

#include <iostream>

int main (){
	
	float numero_1, numero_2, soma;
	
	std::cout <<"Digite um numero:";
	std::cin >>numero_1;
	
	std::cout <<"Digite outro numero:";
	std::cin >> numero_2;
	
	soma = numero_1 + numero_2;
	
	if (soma >20){
		std::cout << ("soma:") << soma + 8;
	} 
	else{
		std::cout << ("soma:") << soma - 5;
	}
	 
	
	return 0;
}
