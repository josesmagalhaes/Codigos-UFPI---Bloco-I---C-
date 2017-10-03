/*
Uma empresa decide dar um aumento de 30% aos funcionários com
salários inferiores a R$900,00. Faça um programa em que seja 
digitado o salário de um funcionário e mostre o valor do salário
reajustado.
*/

#include<iostream>

using namespace std;

int main () {
	float salario,salarioReajustado;
	cout << "Digite o valor do salario do servidor: ";
	cin >> salario;
	if (salario>900.00){
		salarioReajustado=salario+(salario*0.30);
		cout.precision(2);
		cout << fixed <<"O valor do salario com aumento e: R$ " << salarioReajustado << endl;
	}else{
		cout << "Servidor nao tem direito a reajuste!" << endl;
	}
	
	return 0;
}
