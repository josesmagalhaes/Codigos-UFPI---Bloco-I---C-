/*
Dado um número, informar se ele é ou não é múltiplo de 3.

*/

#include <iostream>

using namespace std;

int main () {
	int numero;
	cout << "Digite um numero inteiro: ";
	cin >> numero;
	if ((numero % 3)==0){
		cout << "Este numero e multiplo de 3!" << endl;
	}else
		cout << "Este numero nao e multiplo de 3!" << endl;
	
	return 0;
	
}
