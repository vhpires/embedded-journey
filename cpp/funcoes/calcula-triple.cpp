#include<iostream>

using namespace std;

int triple(int numero){

	return numero * 3;

}


int main(){

	int numero;

	cout << "Digite um número: " << endl;

	cin >> numero;

	int resultado = triple(numero);

	cout << "O triplo de " << numero << " é: " << resultado;

	return 0;
}
