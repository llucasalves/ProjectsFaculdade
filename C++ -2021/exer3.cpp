/*Quest�o.
Quest�o: Fa�a uma calculadora completa em C++ onde o usu�rio deve escolher uma op��o de equa��o (+, -, /, e *) inserir dois n�meros. 
O resultado da equa��o devera sempre ser positivo.
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
