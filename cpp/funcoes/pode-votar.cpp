#include<iostream>

using namespace std;

bool podeVotar(int idade){

	return idade >= 16;
}

int main(){

	int idade;

	cout << "Digite a idade: ";
	cin >> idade;

	bool resultado = podeVotar(idade);

	if(resultado){

		cout << "Pode votar.";
	}
	else{

		cout << "Não pode votar.";
	}

	return 0;

}
