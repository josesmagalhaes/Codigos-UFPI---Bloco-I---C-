/*
Faça um algoritmo que represente uma função f(x) = . O usuário deve
 fornecer os valores dos coeficientes a, b e c e um valor para x. 
 Ao final, o algoritmo deve exibir o valordef(x).
 */

#include <iostream>

using namespace std;

int main () {
	float a, b, c, x, fx;
	cout << "Digite os valores de A, B e C respectivamente: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Digite o valor de X: ";
	cin >> x;
	
	fx=a*x*x+b*x+c;
	
	cout << "O valor da funcao (fx) e: " << fx <<endl;
	
	return 0;
	
}
