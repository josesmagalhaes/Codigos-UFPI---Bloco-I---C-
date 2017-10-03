/*
Dado o salário bruto de uma pessoa, exibir o desconto do INSS segundo a tabela abaixo:

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
	
	return 0;
}
