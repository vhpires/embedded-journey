#include<iostream>

using namespace std;

float media( float numero1, float numero2, float numero3){

	return (numero1 + numero2 + numero3) / 3;

}

int main(){

	float x;
	float y;
	float z;

	cout << "Digite o primeiro número: ";
	cin >> x;

	cout << "Digite o segundo número: ";
	cin >> y;

	cout <<  "Digite o terceiro número: ";
	cin >> z;

	float resultado = media(x, y, z);

	cout << "A média dos tres números é: " << resultado;

	return 0;

}
