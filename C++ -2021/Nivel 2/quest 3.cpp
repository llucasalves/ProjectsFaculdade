/*3 -Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius. A f�rmula de convers�o a ser utilizada � C = (( F � 32 ) * 5) / 9, em 
que a vari�vel F representa a temperatura em graus Fahrenheit e a vari�vel C a temperatura em graus Celsius.*/

#include <iostream>

int main(){
	
	float graus_f, graus_c;
	
	std::cout << ("Infome a Temperatura em Fahrenheit:");
	std::cin >> graus_f;
	
	graus_c = ((graus_f - 32 ) * 5 ) / 9;
	
	std::cout << graus_c <<(" Graus Celsius: ");  
	std::cout << graus_f <<(" Graus Fahrenheit: ");
	
		
	return 0;
}
