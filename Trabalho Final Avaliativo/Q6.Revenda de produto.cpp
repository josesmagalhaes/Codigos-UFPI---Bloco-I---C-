/*
Um comerciante comprou um produto e deseja revendê-lo com um lucro de 45%
se o valor de compra for menor do que R$ 20,00; caso contrário, o lucro será
de 30%. Entrar com o valor de compra do produto e exibir seu valor de venda.
*/

#include <iostream>

using namespace std;

int main () {
	float precoCompra, precoVenda;
	cout << "Digite o valor de compra do produto: ";
	cin >> precoCompra;
	
	if (precoCompra < 20.00){
		precoVenda=precoCompra*0.45;
		cout << "O preco de Venda e de R$: " << precoVenda <<endl;
	}else
		precoVenda=precoCompra*0.3;
		cout << "O preco de venda do produto e de R$: " << precoVenda <<endl;
	
	return 0;
}
