/*
Fazer um algoritmo em que o usuário forneça o número
do dia da semana. O algoritmo deveexibironomedo dia da 
semana paraonúmerodigitado. Exemplo:01=Domingo.
*/
 
#include<iostream>

using namespace std;

int main () {
	int dia;
	cout << "Digite um dia da semana: ";
	cin >> dia;
	
	string semana = (dia==1) ? "Domingo" :
					(dia==2) ? "Segunda-feira":
					(dia==3) ? "Terca-feira":					
					(dia==4) ? "Quarta-feira":	
					(dia==5) ? "Quinta-feira":					
					(dia==6) ? "Sexta-feira":					
					(dia==7) ? "Sabado":
							   "Dia invalido!";					
					
	cout << semana << endl;
				
	return 0;
}
