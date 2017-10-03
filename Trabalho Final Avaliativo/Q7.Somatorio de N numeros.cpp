/*
Um comerciante comprou um produto e deseja revendê-lo com um lucro de 45%
se o valor de compra for menor do que R$ 20,00; caso contrário, o lucro será
de 30%. Entrar com o valor de compra do produto e exibir seu valor de venda.
*/

#include <iostream>

using namespace std;

int main () {
	int num=0, n=0, i=0, soma=0;
	cout << "Digite a quantidade de numeros a serem somados: ";
	cin >> n;
	
	for (i=0;i<n;i++){
		cout << "Favor, digitar um numero inteiro: ";
		cin >> num;
		soma+=num;
	}
	
	cout << "A soma dos numeros digitados e: " << soma <<endl;
	
	return 0;
}
