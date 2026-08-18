#include<iostream>

using namespace std;

bool temDesconto(float valorCompra, bool clienteVip){

	return valorCompra >= 200 || clienteVip;

}

int main(){

	float valor;

	cout << "Digite o valor da compra: ";
	cin >> valor;

	char vip;

	cout << "Cliente é vip? (s / n): ";
	cin >> vip;

	bool clienteVip = vip == 's' || vip == 'S';

	bool resultado = temDesconto(valor, clienteVip);

	if(resultado){

		cout << "Tem desconto.";

	} else{

		cout << "Não tem desconto";

	}

	return 0;

}
