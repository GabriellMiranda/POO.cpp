#include <iostream>
#include <string.h>
//Manipulando Strings
using namespace std;

int main(){
    string nome;
    string sobre;
    cout << "Entre com seu nome:\n";
    cin >> nome; //cin << leitura de variáveis;
    cout << "Entre com seu sobrenome:\n";
    cin >> sobre;
    string nome_completo = nome + " " + sobre; //Concatenação de String
    cout << nome_completo;
    cout << " Fazendo outra leitura de String usando o getline:\n";
    cout << "Digite seu nome novamente:\n";
    getline(cin, nome);//o getline pega toda as palavaras do texto digitado mesmo que tenha espaçoes
    setbuf(stdin, 0);
    cout << nome;

    return 0;
}
// o cin só pega o primeiro valor da string