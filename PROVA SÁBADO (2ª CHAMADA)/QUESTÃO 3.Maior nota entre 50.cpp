/*
Fazer um algoritmo que permita ao usuário digitar
cada uma das notas de uma avaliação de 50 alunos
de uma turma. Após as notas serem digitadas, 
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
