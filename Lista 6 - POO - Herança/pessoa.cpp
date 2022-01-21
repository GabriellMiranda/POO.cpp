#include "pessoa.hpp"
#include <iostream>
#include <string>
using namespace std;

Pessoa::Pessoa(string n, string e) : nome{n}, endereco{e} {}

void Pessoa::setEndereco(string end){
    endereco = end;
}

void Pessoa::print(){
    cout <<"Nome:"<<nome<<"\n";
    cout <<"Endereco:" << endereco << "\n";
}
