/*3 -Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius. A fórmula de conversão a ser utilizada é C = (( F – 32 ) * 5) / 9, em 
que a variável F representa a temperatura em graus Fahrenheit e a variável C a temperatura em graus Celsius.*/

#include <iostream>

int main(){
	
	float graus_f, graus_c;
	
	std::cout << ("Infome a Temperatura em Fahrenheit:");
	std::cin >> graus_f;
	
	graus_c = ((graus_f - 32 ) * 5 ) / 9;
	
	std::cout << graus_c <<(" Temperatura ");
	
		
	return 0;
}
