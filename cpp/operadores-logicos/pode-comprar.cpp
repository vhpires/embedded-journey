#include<iostream>

using namespace std;

bool podeComprar( float valorProduto, float saldo, bool temCupom){

	return saldo >= valorProduto || temCupom;

}

int main(){

	float valor;

	cout << "Digite o valor do produto: ";
	cin >> valor;

	float saldo;

	cout << "Digite o saldo: ";
	cin >> saldo;

	char cupom;
	
	cout << "Tem cupom? (s / n) ";
	cin >> cupom;

	bool temCupom = cupom == 's' || cupom == 'S';

	bool resultado = podeComprar(valor, saldo, temCupom);

	if(resultado){
		cout << "Compra permitida";

	}

	else{

		cout << "Compra negada";

	}

	return 0;

}

