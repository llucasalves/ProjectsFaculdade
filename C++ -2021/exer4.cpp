/*
Monte um algoritmo que encontre o valor de aceleração adquirida pelo corpo, sendo o valor correspondente a massa é de 20 kg e 
a sua força resultante é igual a 220N encontre o valor de aceleração.
Fórmulas:
fr = m * a (para calcular força de aceleração)
a = fr / m (para calcular aceleração)*/

#include <iostream>

int main()
{
	int fr = 220 / 20;
	
	std::cout << "A forca Resultante e: " << fr << "m/s2";
	/*         Resultado 11m/s2       */
	
	return 0;
}
