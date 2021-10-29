num1 = 0
num2 = 0
resultado = 0
operacao = ''

num1 = int(input('Digite o primeiro numero: '))
operacao = input('Selecione a operação [+ - / *]: ')
num2 = int(input('Digite o segundo numero: '))

if operacao == '+':
    resultado = num1+num2
elif operacao == '-':
    resultado = num1-num2
elif operacao == '*':
    resultado = num1*num2
elif operacao == '/':
    resultado = num1/num2
else:
    resultado = 'Operação invalida'

print(str(num1) + '' + str(operacao)+ '' + str(num2)+ '=' + str(resultado))