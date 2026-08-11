#include<iostream>

using namespace std;

int quadrado(int numero){

	return numero * numero;

}

int main(){

	int numero;

	cout << "Digite um número: " << endl;
	cin >> numero;

	int resultado = quadrado(numero);

	cout << "O quadrado de " << numero << " é: " << resultado << "!";

	return 0;

}
