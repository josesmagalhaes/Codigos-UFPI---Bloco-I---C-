/*
Dados os valores do salário mínimo e o salário 
de uma pessoa, exibir quantos salários mínimos 
essa pessoa ganha.

*/

#include <iostream>

using namespace std;

int main () {
	float salario, salarioMinimo;
	cout << "Digite o valor do Salario Minimo: ";
	cin >> salarioMinimo;
	cout << "Digite o valor do Salario do Servidor: ";
	cin >> salario;
	
	cout << "O servidor ganha " << salario/salarioMinimo << " salarios." << endl;
	
	return 0;
}
