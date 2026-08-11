#include<iostream>

using namespace std;

int soma(int numero1, int numero2){

	return numero1 + numero2;
}

int main(){

	int x;
	int y;

	cout << "Digite o primeiro número: " << endl;
	cin >> x;

	cout << "Digite o segundo número: " << endl;
	cin >> y;

	int resultado = soma(x, y);

	cout << "A soma dos dois números é: " << resultado;

	return 0;

}
