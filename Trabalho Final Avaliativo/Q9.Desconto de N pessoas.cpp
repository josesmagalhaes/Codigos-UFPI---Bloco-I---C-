/*
Refazer a questão 08, mas o algoritmo deve calcular o salário de N pessoas, sendo que N é dado pelo usuário:

Salário                                                     Percentual do desconto
Menor ou igual a R$ 600,00                                  Insento
Maior que R$ 600,00 e menor ou igual a R$ 1200,00           20%
Maior que R$ 1200,00 e menor ou igual 2000,00               25%
Maior que R$ 2000,00                                        30%
*/


#include <iostream>

using namespace std;

int main () {
	float salario, desconto;
	int i=0, n=0;
	
	cout << "Digite a quantidade de servidores a serem consultados: ";
	cin >> n;
	
	while (i<n){
		cout << "Digite o salario bruto do servidor: ";
		cin >> salario;
	
		if (salario <=600.00){
			cout << "Insento" << endl;
		}else if ((salario > 600.00)and(salario<=1200.00)){
			desconto=salario*0.2;
			cout << "O desconto do servidor e de R$: " << desconto <<endl;
		}else if ((salario > 1200.00)and(salario<=2000.00)){
			desconto=salario*0.25;
			cout << "O desconto do servidor e de R$: " << desconto <<endl;
		}else if (salario > 2000.00){
			desconto=salario*0.3;
			cout << "O desconto do servidor e de R$: " << desconto <<endl;
		}
		
		i++;
	}
	
	return 0;
}
