#include<iostream>

using namespace std;

int dobro(int numero){

	return numero * 2;

}

int main(){

	int numero;
	
	cout << "Digite um número: " << endl;
	cin >> numero;

	int resultado = dobro(numero);

	cout << "O dobro de numero é: " << resultado << endl;

	return 0;

}
