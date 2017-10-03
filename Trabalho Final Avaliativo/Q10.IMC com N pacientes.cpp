/*
Um endocrinologista deseja controlar a sa�de de seus pacientes e,
para isso, se utiliza do �ndice de Massa Corporal (ICM).
Sabendo-se que o IMC � calculado atrav�s da seguinte

f�rmula: Onde: peso � dado em Kg; altura � dada em metros.

Criar um algoritmo que apresente o nome de v�rios pacientes,
o IMC e a faixa de risco de cada um, conforme a seguinte tabela:

IMC                          FAIXA DE RISCO
Abaixo de 20                 Abaixo do peso
A partir de 20 at� 25.       Normal
Acima de 25 at� 30.          Excesso de peso
Acima de 30at� 35.           Obesidade
Acima de 35.                 Obesidade m�rbida
*/


#include <iostream>

using namespace std;

int main () {
	char nome[20];
	int n=0, i=0;
	float peso, imc, mult, altura;
	
	cout << "Digite a quantidade de pacientes a serem consultados";
	cin >> n;
	
	while (i<n){
		cout << "Digite o nome do paciente: ";
		cin >> nome;
		cout << "Digite a altura do paciente: ";
		cin >> altura;
		cout << "Digite o peso: ";
		cin >> peso;
	
		mult=altura*altura;
		imc=peso/mult;
	
		if (imc<20){
			cout << "O paciente "<< nome << " esta com IMC de: " << imc << " portanto, Abaixo do peso" << endl;
		}else if ((imc >=20)and(imc<=25)){
			cout << "O paciente "<< nome << " esta com IMC de: " << imc << " portanto, Normal" << endl;
		}else if ((imc > 25)and(imc<=30)){
			cout << "O paciente "<< nome << " esta com IMC de: " << imc << " portanto, Excesso de peso" << endl;
		}else if ((imc > 30)and(imc<=35)){
			cout << "O paciente "<< nome << " esta com IMC de: " << imc << " portanto, Obesidade" << endl;
		}else if (imc > 35){
			cout << "O paciente "<< nome << " esta com IMC de: " << imc << " portanto, Obesidade morbida" << endl;
		}
	i++;
	}
	
	return 0;
}
