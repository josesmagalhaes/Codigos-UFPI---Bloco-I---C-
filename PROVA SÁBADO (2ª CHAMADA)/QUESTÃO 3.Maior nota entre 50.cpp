/*
Fazer um algoritmo que permita ao usu�rio digitar
cada uma das notas de uma avalia��o de 50 alunos
de uma turma. Ap�s as notas serem digitadas, 
o programa deve exibir o valor da maior nota.
*/

#include<iostream>

using namespace std;

int main () {
	float nota, maior;
	int i;
	cout << "Digite uma nota: ";
	cin >> nota;
	
	i=1;
	maior=nota;
	
	while (i<50){
		cout << "Digite uma nota: ";
		cin >> nota;
		if (nota>maior){
			maior=nota;
		}
	i++;
	}
	cout << "A maior nota e: " << maior << endl;
	
	return 0;
}
