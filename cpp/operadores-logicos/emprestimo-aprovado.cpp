#include<iostream>

using namespace std;

bool emprestimoAprovado(float renda, bool nomeLimpo, bool possuiFiador){
    
    return (renda >= 3000 && nomeLimpo) || possuiFiador;
}

int main(){
    
    float renda;
    cout << "Informe a renda: ";
    cin >> renda;
    
    char situacaoNome;
    cout << "Está com o nome limpo? (s/n) ";
    cin >> situacaoNome;
    
    bool nomeLimpo = situacaoNome == 's' || situacaoNome == 'S';
    
    char situacaoFiador;
    cout << "Possui fiador? ";
    cin >> situacaoFiador;
    
    bool possuiFiador = situacaoFiador == 's' || situacaoFiador == 'S';
    
    bool resultado = emprestimoAprovado(renda, nomeLimpo, possuiFiador);
    
    if(resultado){
        
        cout << "Emprestimo aprovado";
    }
    
    else{
        
        cout << "Emprestimo negado";
    }
    
    return 0;
}
