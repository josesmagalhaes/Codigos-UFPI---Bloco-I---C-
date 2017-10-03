/*
Sabendo que 100 quilowatts de energia custam um sétimo do salário mínimo, 
fazer um algoritmo que dados a valor do salário mínimo e a quantidade de 
quilowatts gastos por uma residência, exibir: valor em de cada quilowatt, 
valor da conta de energia e novo valordacontade energiaapósum descontode 10%.
*/

#include <iostream>

using namespace std;;

int main () {
	float salarioMinimo, qtdQuilowatt, valorQuilowatt, valorConta1, valorConta2;
	cout << "Digite a quantidade de quilowatts: ";
	cin >> qtdQuilowatt;
	cout << "Digite o valor do salario minimo atual: ";
	cin >> salarioMinimo;
	
	valorQuilowatt=salarioMinimo/7;
	valorConta1=qtdQuilowatt*valorQuilowatt;
	valorConta2=valorConta1*0.1;
	
	cout << "O valor de cada Quilowatt e: " << valorQuilowatt << endl;
	cout << "O valor da conta de energia e: " << valorConta1 << endl;
	cout << "O valor da conta com reajuste e " << valorConta2 << endl;
	
	return 0;
	
}
