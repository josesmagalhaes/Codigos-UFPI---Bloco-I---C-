/*
Fazer um algoritmo que informe a classe eleitoral de 
uma pessoa conforme a tabela abaixo.O usu�rio deve fornecer 
a idadeda pessoa. 

Idade                                          Classe Eleitoral 
abaixo de 16 anos                              n�oeleitor 
entre 18 e 65 anos                             eleitor obrigat�rio 
entre 16 e 18 anos ou maior que 65 anos        eleitorfacultativo 
*/

#include <iostream>

using namespace std;

int main () {
	int idade;
	cout << "Digite a idade do individuo: ";
	cin >> idade;
	
	if (idade < 16) {
		cout << "N�o eleitor!";
	}else
		if ((idade >=18) and (idade<=65)){
			cout << "Eleitor obrigatorio!";
	}else
		cout << "Eleitor facultativo!";
		
	return 0;
}
