/*
Fazer um algoritmo que permita ao usuário digitar as notas de 50 pessoas.
 Apósos números serem digitados,o programa deve exibir a maior nota.
*/

#include<iostream>

using namespace std;

int main () {
	float nota, maior=0;
	int i;
	
	cout << "Digite uma nota: ";
	cin >> nota;
	
	i=1;
	maior=nota;
	
	while (i<50){
		cout << "Digite uma nota: " ;
		cin >> nota;
		if (nota>maior){
			maior=nota;
		}
	i++;
	}
	cout.precision(1);
	cout << fixed <<"A maior nota digitada e: " << maior << endl;
	
	return 0;
}
