#include<iostream>

using namespace std;

bool maiorDeIdade(int idade){
    
    return idade >= 18;
    
}

int main(){
    
    int idade;
    
    cout << "Digite a idade: ";
    cin >> idade;
    
    bool retorno = maiorDeIdade(idade);
    
    if(retorno){
        
        cout << "Maior de idade.";
    }
    
    else{
        cout << "Menor de idade";
    }
    
    return 0;
}
