/*1 - Calcule a quantidade de litros de combust�vel gasta em uma viagem, utilizando um autom�vel que faz 12 km por litro. Para obter o c�lculo, 
o usu�rio deve fornecer o tempo gasto na viagem e a velocidade m�dia. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula 
DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula 
LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores da velocidade m�dia, tempo gasto, dist�ncia percorrida e quantidade de litros 
utilizada na viagem.*/

#include <iostream>

int main ()
{
	float tempo, velocidade, distancia, litros_usados;
	
	std::cout << ("Tempo: ");
	std::cin >> tempo;
	
	std::cout << ("Velocidade: ");
	std::cin >> velocidade;
	
	distancia = (tempo / 60) * velocidade;
	litros_usados = distancia / tempo /60;
	velocidade = distancia / (tempo / 60);
	
	std:: cout << ("Velocidade media:") << velocidade << " Km / h ";
	 
	std::cout << ("\nDistancia percorrida: ") << distancia << " Km ";
	 
	std:: cout << ("\nLitros ultilizados na viagem: ") << litros_usados << " L " ;
			
	
	return 0;
}
