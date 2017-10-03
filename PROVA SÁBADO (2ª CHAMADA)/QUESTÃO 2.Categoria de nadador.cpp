/*
Faça um programa que receba a idade de um nadador 
e mostre sua categoria, usando as regras a seguir. 
Para idade inferior a 5, o programa deverá mostrar 
uma mensagem de erro.

Categoria                   Idade 
Infantil                    5 a 7  
Infanto-Juvenil             8 a 10 
Juvenil                     11 a 15 
Adulto                      16 a 30 
Master                      Acima de 30
*/

#include <iostream>

using namespace std;

int main () {
	int idade;
	cout << "Digite a idade do competidor: ";
	cin >> idade;
	if (idade<5){
		cout << "ERRO! Idade inválida!" << endl;
	}else
		if ((idade>=5)and(idade<=7)){
			cout << "Infantil" << endl;	
	}else
		if ((idade>=8)and(idade<=10)){
			cout << "Infanto-Juvenil!" << endl;	
	}else
		if ((idade>=11)and(idade<=15)){
			cout << "Juvenil!" << endl;
	}else
		if ((idade>=16)and(idade<=30)){
			cout << "Adulto" << endl;
	}else
		if (idade>30){
			cout << "Master" << endl;
	}
	
	return 0;
}
