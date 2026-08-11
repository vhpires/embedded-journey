#include<iostream>

using namespace std;

int multiplica(int numero1, int numero2){

        return numero1 * numero2;

}

int main(){

        int x;
        int y;

        cout << "Digite um número: ";
        cin >> x;

        cout << "Digite outro número: ";
        cin >> y;

        int resultado = multiplica(x, y);

        cout << "O resultado da multiplicação é: " << resultado;

        return 0;

}

