/*2 -Ler uma temperatura em graus Celsius e exibi-la convertida em graus Fahrenheit. A f�rmula de convers�o a ser utilizada � F = ( 9 * C + 160 ) / 5, em 
que a vari�vel F representa a temperatura em graus Fahrenheit e a vari�vel C a temperatura em graus Celsius.*/

#include <iostream>

int main(){
	
	float graus_f, graus_c;
	
	std::cout << ("Infome a Temperatura em Celsius:");
	std::cin >> graus_c;
	
	graus_f = (9 * graus_c + 160) / 5;
	
	std::cout << graus_c <<(" Graus Celsius: ");  
	std::cout << graus_f <<(" Graus Fahrenheit: ");
	
		
	return 0;
}
