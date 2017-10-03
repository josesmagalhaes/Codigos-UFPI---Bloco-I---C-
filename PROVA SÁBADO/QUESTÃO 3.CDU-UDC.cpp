/*
Dado um número inteiro no formato CDU, exibir o número no formato UDC. 
Exemplo: 123, será321. O número deverá ser atribuído a uma variável antes 
de ser exibido.
*/

#include <iostream>

using namespace std;

int main () {
	int num, c,d,u, udc;
	cout << "Digite um numero inteiro: ";
	cin >> num ;
	
	c=num/100;
	d=(num % 100)/10;
	u=(num % 100)%10;
	
	
	cout << "A ordem inversa do numero e: " << u << d << c <<endl;
	return 0;
}
