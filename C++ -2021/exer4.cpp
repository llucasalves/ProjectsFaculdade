/*
Monte um algoritmo que encontre o valor de acelera��o adquirida pelo corpo, sendo o valor correspondente a massa � de 20 kg e 
a sua for�a resultante � igual a 220N encontre o valor de acelera��o.
F�rmulas:
fr = m * a (para calcular for�a de acelera��o)
a = fr / m (para calcular acelera��o)*/

#include <iostream>

int main()
{
	int fr = 220 / 20;
	
	std::cout << "A forca Resultante e: " << fr << "m/s2";
	/*         Resultado 11m/s2       */
	
	return 0;
}
