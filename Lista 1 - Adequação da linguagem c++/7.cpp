#include <iostream>
#include <cstdlib>
#include <string>
//Trabalhando com structs, noções básicas
using namespace std;

typedef struct{
    string nome;
    int idade;
    string sexo;
}Tpessoa;


int main(){
    Tpessoa *pessoa = new Tpessoa[2];
    for(int i = 0; i < 2; i ++){
        cout << "Digite o nome da pessoa "<<i<<":\n";
        getline(cin, pessoa[i].nome);
        cout << "Digite a idade:\n";
        cin >> pessoa[i].idade;
        cout << "Digite o sexo:\n";
        cin >> pessoa[i].sexo;
    }

    for(int i = 0; i < 2; i ++){
        cout << "nome da pessoa: "<< pessoa[i].nome <<"\n";
        cout << "idade:"<<pessoa[i].idade <<"\n";
        cout << "sexo:"<<pessoa[i].sexo <<"\n";
        cout <<"\n\n";
    }


    return 0;
}