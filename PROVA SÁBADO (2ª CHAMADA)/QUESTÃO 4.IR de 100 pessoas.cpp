/*
Dados os salários de 100 pessoas, exibir o imposto
de renda cobrado para cada pessoa de acordo com a
tabela abaixo:

Salário                                                   Percentual de Desconto
Menor ou igual a R$ 600,00                                Isento 
Maior que R$ 600,00 e menor ou igual a R$ 1200,00         20% 
Maior que R$ 1200,00 e menor ou igual 2000,00             25% 
Maior que R$ 2000,00                                      30%

*/

#include <iostream>

using namespace std;

int main () {
	float salario, desconto;
	int i=0;
	
	while (i<100){
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
