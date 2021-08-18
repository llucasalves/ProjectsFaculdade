/*5 - Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em Kelvin. Para conversão deve-se primeiro converter em graus Celsius conforme 
exercício anterior, e depois converter em Kelvin.*/

#include <iostream>

int main (){
	
	float graus_c, kelvin, graus_f;
	
	std::cout << ( "Digite uma Temperatura Fahrenheit:");
	std::cin >> graus_f;
	
	graus_c = ((graus_f - 32) * 5) / 9;
	kelvin = graus_c + 273,15;
	
	std::cout << kelvin << ("Graus kelvin");
	 
	
	return 0;
}
