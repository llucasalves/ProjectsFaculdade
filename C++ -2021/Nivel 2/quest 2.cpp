/*2 -Ler uma temperatura em graus Celsius e exibi-la convertida em graus Fahrenheit. A fórmula de conversão a ser utilizada é F = ( 9 * C + 160 ) / 5, em 
que a variável F representa a temperatura em graus Fahrenheit e a variável C a temperatura em graus Celsius.*/

#include <iostream>

int main(){
	
	float graus_f, graus_c;
	
	std::cout << ("Infome a Temperatura em Celsius:");
	std::cin >> graus_c;
	
	graus_f = (9 * graus_c + 160) / 5;
	
	std::cout << graus_f <<(" Temperatura ");
			
	return 0;
}
