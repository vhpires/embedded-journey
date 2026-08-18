#include<iostream>

using namespace std;

bool entregaLiberada(bool temHabilitacao, bool veiculoRegular, bool autorizacaoEspecial){
    
    return (temHabilitacao && veiculoRegular) || autorizacaoEspecial;
}

int main(){
    
    char habilitacao;
    cout << "Tem habilitação?(s/n) ";
    cin >> habilitacao;
    
    bool temHabilitacao = habilitacao == 's' || habilitacao == 'S';
    
    char veiculo;
    cout << "O veículo está regular?(s/n)";
    cin >> veiculo;
    
    bool veiculoRegular = veiculo == 's' || veiculo == 'S';
    
    char autorizacao;
    cout << "Possui autorização especial?(s/n) ";
    cin >> autorizacao;
    
    bool autorizacaoEspecial = autorizacao == 's' || autorizacao == 'S';
    
    bool resultado = entregaLiberada(temHabilitacao, veiculoRegular, autorizacaoEspecial);
    
    if(resultado){
        
        cout << "Entrega liberada";
    
        
    } else {
        
        cout << "Entrega bloqueada";
        
    }
    
    return 0;
}
