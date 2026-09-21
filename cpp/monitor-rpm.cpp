#include <iostream>
#include <vector>

using namespace std;

int margensRpm(const vector<int>& rpms){
    
    int contador = 0;
    
    for(int i = 0; i < rpms.size(); i++){
        
        if(rpms[i] >= 2000 && rpms[i] <= 3500){
            
            contador++;
        }
        
    }
    
    return contador;
    
}

int main()
{
    vector<int> rpms;
    int rpm;
    
    cout << "Digite os valores de RPM: " << endl;
    cin >>  rpm;
    
    while(rpm != -1){
        
        rpms.push_back(rpm);
        cin >> rpm;
    }
    
    if(rpms.empty()){
        
        cout << "Nenhum valor registrado" << endl;
        return 0;
        
    }
    
    int margens = margensRpm(rpms);
    
    cout << "RPMs entre 2000 e 3500: " << margens << endl;

    return 0;
}
