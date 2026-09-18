#include <iostream>
#include <vector>

using namespace std;


int contarCriticas(const vector<int>& temperaturas){

	int contador = 0;

	for(int i = 0; i < temperaturas.size(); i++){

		if(temperaturas[i] >= 100){
			contador++;
		}
	}
	return contador;
}


void corrigirTemperaturas(vector<int>& temperaturas){

	for(int i = 0; i < temperaturas.size(); i++){

		temperaturas[i] += 2;

	}
}


int main(){

	vector<int> temperaturas;

	int temperatura;


	cout << "Digite um valor: " << endl;

	cin >> temperatura;


	while(temperatura != -1){

		temperaturas.push_back(temperatura);

		cin >> temperatura;
	}


	corrigirTemperaturas(temperaturas);

	int criticas = contarCriticas(temperaturas);

	cout << "Quantidade informada: " <<  temperaturas.size() << endl;

	cout << "Valores registrados: ";


	for(int i = 0; i < temperaturas.size(); i++){

		cout << temperaturas[i] << " ";

	}

	cout << endl;




	cout << "Criticas encontradas: " << criticas << endl;

	return 0;

}

