/*
Fazer um algoritmo que permita ao usu�rio digitar as idades de 100 pessoas.
Ap�s os n�meros serem digitados,o programa deve exibir a maior idade digitada.
*/

#include <iostream>

using namespace std;

int main () {
	int idade, i, maior;
	
	cout << "Digite uma idade: ";
	cin >> idade;
	
	i=1;
	maior=idade;
	while (i<3){
		cout << "Digite uma idade: ";
		cin >> idade;
		if (idade>maior){
			maior=idade;
		}
		i++;
	}
	cout << "A maior idade e: "	<< maior <<endl;
	
	return 0;
}
