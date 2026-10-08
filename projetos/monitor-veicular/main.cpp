#include <iostream>
#include <vector>
using namespace std;


struct LeituraVeiculo{

	int rpm;
	int temperatura;
	int velocidade;
};


bool analisarRpm(int rpm){
    return rpm > 6000;
}

bool analisarTemperatura(int temperatura){
    return temperatura > 110;
}

bool analisarVelocidade(int velocidade){
    return velocidade > 120;
}

int encontrarMaiorRpm(const vector<LeituraVeiculo>& historico){

    int maiorRpm = historico[0].rpm;

    for(int i = 0; i < /*rpms.size()*/historico.size(); i++){

        if(historico[i].rpm > maiorRpm){
            maiorRpm = historico[i].rpm;
        }
    }

    return maiorRpm;
}

float calcularMediaVelocidade(const vector<LeituraVeiculo>& historico){

    float somaVelocidades = 0;

    for(int i = 0; i < historico.size(); i++){
        somaVelocidades += historico[i].velocidade;
    }

    float mediaVelocidade = somaVelocidades / historico.size();

    return mediaVelocidade;
}

int main(){

/*  vector<int> rpms;
    vector<int> temperaturas;
    vector<int> velocidades;*/

vector<LeituraVeiculo> historico;



/*  int rpm;
    int temperatura;
    int velocidade;*/

    LeituraVeiculo leituraAtual;

    char continuar;
    int totalAlertas = 0;

    do {
        cout << " === LEITURA ATUAL === " << endl;

        cout << "Digite o valor de RPM: " << endl;
        cin >> leituraAtual.rpm;
        /*rpms.push_back(leituraAtual.rpm);*/

        cout << "Digite o valor de temperatura: " << endl;
        cin >> leituraAtual.temperatura;
        /*temperaturas.push_back(leituraAtual.temperatura);*/

        cout << "Digite o valor de velocidade: " << endl;
        cin >> leituraAtual.velocidade;
        /*velocidades.push_back(leituraAtual.velocidade);*/

	historico.push_back(leituraAtual);

        cout << "RPM: " << leituraAtual.rpm << endl;
        cout << "Temperatura: " << leituraAtual.temperatura << " C" << endl;
        cout << "Velocidade: " << leituraAtual.velocidade << " Km/h" << endl;

        cout << " === STATUS === " << endl;

        bool statusRpm = analisarRpm(leituraAtual.rpm);

        if(statusRpm){
            cout << "ALERTA: RPM elevado" << endl;
            totalAlertas++;
        }

        bool statusTemperatura = analisarTemperatura(leituraAtual.temperatura);

        if(statusTemperatura){
            cout << "ALERTA: Temperatura elevada" << endl;
            totalAlertas++;
        }

        bool statusVelocidade = analisarVelocidade(leituraAtual.velocidade);

        if(statusVelocidade){
            cout << "ALERTA: Velocidade elevada" << endl;
            totalAlertas++;
        }

        if(!statusRpm && !statusTemperatura && !statusVelocidade){
            cout << "Todos os parametros estao normais." << endl;
        }

        cout << "Deseja realizar nova leitura? (s/n): ";
        cin >> continuar;

        while(continuar != 's' && continuar != 'S' &&
              continuar != 'n' && continuar != 'N'){

            cout << "Digite apenas s ou n!" << endl;
            cout << "Deseja realizar nova leitura? (s/n): ";
            cin >> continuar;
        }

    } while(continuar == 's' || continuar == 'S');

    int maiorRpm = encontrarMaiorRpm(historico);

    float mediaVelocidade = calcularMediaVelocidade(historico);

    cout << " === RESUMO DA SESSAO === " << endl;
    cout << "Leituras realizadas: " << historico.size() << endl;
    cout << "Maior rpm encontrado: " << maiorRpm << endl;
    cout << "Total de alertas detectados: " << totalAlertas << endl;
    cout << "Media das velocidades registradas: "
         << mediaVelocidade << endl;

    cout << "Programa finalizado com sucesso." << endl;

    return 0;
}
