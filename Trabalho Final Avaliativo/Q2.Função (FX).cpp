/*
Faça um algoritmo que para uma função genérica 
f(x) = e dados os valores dos coeficientes a, b
e c e um valor para x, exibir o valor de f(x)

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
