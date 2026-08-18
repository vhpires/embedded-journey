#include<iostream>

using namespace std;

bool saquePermitido(int saldo, int saque){
    
    return saldo >= saque && saque > 0;
}

int main(){
    
    int saldo;
    cout << "Informe o saldo atual: ";
    cin >> saldo;
    
    int saque;
    cout << "Informe o valor do saque: ";
    cin >> saque;
    
    
    
    bool resultado = saquePermitido(saldo, saque);
    
    if(resultado){
        
        cout << "Saque permitido";
        
    } else {
        
        cout << "Saque negado";
    }
    
    return 0;
    
}
