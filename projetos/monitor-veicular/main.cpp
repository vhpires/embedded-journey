#include <iostream>
using namespace std;


bool analisarRpm(int rpm){

	return rpm > 6000;
}

bool analisarTemperatura(int temperatura){
	return temperatura > 110;

}

bool analisarVelocidade(int velocidade){

	return velocidade > 120;

}

int main(){

	int rpm;
	int temperatura;
	int velocidade;
	char continuar;

	do {

		cout << " === LEITURA ATUAL === " << endl;
		cout << "Digite o valor de RPM: " << endl;
		cin >> rpm;

		cout << "Digite o valor de temperatura: " << endl;
		cin >> temperatura;

		cout << "Digite o valor de velocidade: " << endl;
		cin >> velocidade;

		cout << "RPM: " << rpm << endl;
		cout << "Temperatura: " << temperatura << " C" << endl;
		cout << "Velocidade: " << velocidade << " Km/h" << endl;

		cout << "STATUS: " << endl;


		bool statusRpm = analisarRpm(rpm);
			if(statusRpm){

				cout << "ALERTA: RPM elevado" << endl;
			}


		bool statusTemperatura = analisarTemperatura(temperatura);

			if(statusTemperatura){

				cout <<  "ALERTA: Temperatura elevada" << endl;
			}


		bool statusVelocidade = analisarVelocidade(velocidade);

			if(statusVelocidade){

				cout << "ALERTA: Velocidade elevada" << endl;
		}

		if (!statusRpm && !statusTemperatura && !statusVelocidade){

			cout << "Todos os parametros estao normais." << endl;

		}

		cout << "Deseja realizar nova leitura? (s/n): ";
		cin >> continuar;

		while(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N'){

			cout << "Digite apenas s ou n! " << endl;

			cout << "Deseja realizar nova leitura? (s/n): ";
                	cin >> continuar;

		}

	} while (continuar == 's' || continuar == 'S');

	cout << "Programa finalizado com sucesso." << endl;

	return 0;

}

