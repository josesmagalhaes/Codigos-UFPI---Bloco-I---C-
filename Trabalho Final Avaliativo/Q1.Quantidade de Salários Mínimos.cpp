/*
Dados os valores do sal�rio m�nimo e o sal�rio 
de uma pessoa, exibir quantos sal�rios m�nimos 
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
