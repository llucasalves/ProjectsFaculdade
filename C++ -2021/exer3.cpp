/*Questão.
Questão: Faça uma calculadora completa em C++ onde o usuário deve escolher uma opção de equação (+, -, /, e *) inserir dois números. 
O resultado da equação devera sempre ser positivo.
Diquinha: Use estrutura condicional*/

 #include <iostream>
 
 int main ()
 {
 	int num1, num2, resultado;
 	char operacao;
 	
 	std::cout << "Escolha uma operacao +, -, /, * \n";
 	std::cin >> operacao;
 	std::cout << "Digite o Primeiro numero:";
 	std::cin >> num1;
 	std::cout << "Digite o segundo numero:";
 	std::cin >> num2;
 	
 	if (operacao == '+'){
 		std::cout << "Resultado:" << num1 + num2;
	 } else if (operacao == '-')
	 	std::cout << "Resultado:" << num1 - num2;
	 else if (operacao == '/')
	 	std::cout << "Resultado:" << num1 / num2;
	else if (operacao == '*')
		std::cout << "Resultado:" << num1 * num2;
		 
 	return 0;
 }
