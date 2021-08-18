/*1 - Calcule a quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 km por litro. Para obter o cálculo, 
o usuário deve fornecer o tempo gasto na viagem e a velocidade média. Desta forma, será possível obter a distância percorrida com a fórmula 
DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula 
LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores da velocidade média, tempo gasto, distância percorrida e quantidade de litros 
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
