#include<iostream>
#include<string>

using namespace std;

void show(string text){

string border = "======";

cout <<  border << endl;
cout << text << endl;
cout << border << endl;

}

int main(){

string nome = "Victor";

show(nome);

return 0;

}
