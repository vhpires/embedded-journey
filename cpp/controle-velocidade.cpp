#include <iostream>
#include <vector>

using namespace std;

void acrescentarVelocidade(vector<int>& velocidades){
    
    for(int i = 0; i < velocidades.size(); i++){
    
    velocidades[i] = velocidades[i] + 5;
    }

}


int altaVelocidade(const vector<int>& velocidades){
    
    int contador = 0;
    
    for(int i = 0; i < velocidades.size(); i++){
        
        if(velocidades[i] > 80){
            
            contador++;
        }
    }
    
    return contador;
    
}
    
    

int main(){
    
    vector<int> velocidades;
    
    int velocidade;
    
    
    
    cout << "Digite o valor da velocidade (-1 para encerrar): " << endl;
    cin >> velocidade;
    
    
    while(velocidade != -1){
        
        velocidades.push_back(velocidade);
        
        
        
        cin >> velocidade;
        
        
        
        
        
        
    }
    
    
    acrescentarVelocidade(velocidades);
    
    int velocidadeAlta = altaVelocidade(velocidades);
    
    
    
    cout << "Velocidades registradas: ";
    
    for(int i = 0; i < velocidades.size(); i++){
    
        cout << velocidades[i] << " ";
        
    }
    
    cout << endl;
    
    cout << "Quantidade de registros: " << velocidades.size() <<  endl;
    
    
    cout << "Acima de 80 km/h: " << velocidadeAlta << endl;
    


    return 0;
}
