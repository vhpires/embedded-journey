#include<iostream>

using namespace std;

int maiorTemperatura(int temperaturas[],int quantidade){

	int maior = temperaturas[0];

	for(int i = 0; i < quantidade; i++){

		if(temperaturas[i] > maior){

			maior = temperaturas[i];
		}
	}

	return maior;
}


int igualAcimaCem(int temperaturas[], int quantidade){

	int maiorIgualCem = 0;


	for(int i = 0; i <  quantidade; i++){

		if(temperaturas[i] >= 100){

			maiorIgualCem++;

		}
	}

	return maiorIgualCem;
}



float mediaTemperaturas(int temperaturas[], int quantidade){

	float soma = 0;

	for(int i = 0; i <  quantidade; i++){

		soma += temperaturas[i];
	}

	float media = soma / quantidade;

	return media;
}


int main (){

	int temperaturas[8] = {88, 94, 103, 97, 110, 105, 91, 99};

	int resultadoMaiorTemperatura = maiorTemperatura(temperaturas, 8);

	int resultadoIgualAcimaCem = igualAcimaCem(temperaturas, 8);

	float resultadoMedia = mediaTemperaturas(temperaturas, 8);


	cout << "=== MONITOR DO MOTOR ===" << endl;
	cout << "Maior temperatura: " << resultadoMaiorTemperatura << " C " << endl;
	cout << "Leituras criticas: " << resultadoIgualAcimaCem << endl;
	cout << "Temperatura media: " << resultadoMedia << " C " << endl;

	return 0;

}
