// 6 -Ler um valor inteiro qualquer positivo ou negativo e apresentar o n�mero lido como um valor positivo.

#include <iostream>

int main (){
	
	int valor_int1;
	
	std::cout << "Digite um numero:";
	std::cin >> valor_int1;
	
	if (valor_int1 < 0){
		valor_int1 *= - 1;
	}
	
	std::cout << valor_int1 <<(" Positivo ");
	
			
	return 0;
}
