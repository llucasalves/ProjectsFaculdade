/*4 - Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Kelvin. A f�rmula para convers�o � K = C + 273.15, onde K � a temperatura 
em Kelvin e C � a temperatura em graus Celsius.*/

#include <iostream>

int main (){
	
	float graus_c, kevin;
	
	std::cout << ("Temperatura em graus Celsius:");
	std::cin >> graus_c;
	
	kevin = graus_c + 273,15;
	
	std::cout << graus_c << (" Graus Celsius\n"); 
	
	std::cout << kevin << (" Graus Kevin ");
	
		
	return 0;
}
