/******************************************************************************

Uma loja oferece frete grátis para compras de pelo menos R$ 250, desde que o cliente tenha cadastro.
Caso contrário, o frete custa 20% do valor da compra.

*******************************************************************************/
#include <iostream>

using namespace std;

bool freteGratis(float valorCompras, bool temCadastro){
    
    return valorCompras >= 250 && temCadastro;
}

int main()
{
    float compras;
    cout << "Qual o valor da compra? ";
    cin >> compras;
    
    char cadastro;
    cout << "Possui cadastro?(s/n) ";
    cin >> cadastro;
    
    bool temCadastro = cadastro == 's' || cadastro == 'S';
    
    
    
    bool resultado = freteGratis(compras, temCadastro);
    
    if(resultado){
        
        cout << "Tem frete gratis!";
    
        
    } else {
        
        float frete;
        frete = compras * 0.2;
        
        cout << "O frete será de R$: " << frete << endl;
    }
    
    return 0;
}
