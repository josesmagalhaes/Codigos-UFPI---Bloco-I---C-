/*
Um endocrinologista deseja controlar a saúde de seus pacientes e,
para isso, se utiliza do Índice de Massa Corporal (ICM).
Sabendo-se que o IMC é calculado através da seguinte :

fórmula: Onde: peso é dado em Kg; altura é dada em metros.

Criar um algoritmo que apresente o nome do paciente, seu IMC e sua faixa de risco, conforme a seguinte tabela:

IMC                          FAIXA DE RISCO
Abaixo de 20                 Abaixo do peso
A partir de 20 até 25.       Normal
Acima de 25 até 30.          Excesso de peso
Acima de 30até 35.           Obesidade
Acima de 35.                 Obesidade mórbida

*/

#include <iostream>

using namespace std;

int main () {
	float imc, altura, peso, mult;
	cout << "Digite a altura do paciente: ";
	cin >> altura;
	cout << "Digite o peso: ";
	cin >> peso;
	
	mult=altura*altura;
	imc=peso/mult;
	
	if (imc<20){
		cout << "Abaixo do peso" << endl;
	}else if ((imc >=20)and(imc<=25)){
		cout << "Normal" << endl;
	}else if ((imc > 25)and(imc<=30)){
		cout << "Excesso de peso" << endl;
	}else if ((imc > 30)and(imc<=35)){
		cout << "Obesidade" << endl;
	}else if (imc > 35){
		cout << "Obesidade morbida" << endl;
	}
	return 0;
}
