#include<iostream>

using namespace std;

bool acessoPermitido(int idade, bool temIngresso, bool documentoValido){
    
    return idade >= 18 && temIngresso && documentoValido;
    
}


int main(){
    
    int idade;
    
    cout << "Digite a idade: ";
    cin >> idade;
    
    char possuiIngresso;
    
    cout << "Possui ingresso? (s/n) ";
    cin >> possuiIngresso;
    
    bool ingresso = possuiIngresso == 's' || possuiIngresso == 'S';
    
    char temDocumento;
    
    cout << "Possui documento valido? ";
    cin >> temDocumento;
    
    bool documento = temDocumento == 's' || temDocumento == 'S';
    
    bool resultado = acessoPermitido(idade, ingresso, documento);
    
    if(resultado){
        cout << "Acesso permitido";
    }
    
    else{
        
        cout << "Acesso negado";
    }
    
    return 0;
}
