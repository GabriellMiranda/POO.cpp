#include "aluno.hpp"

Aluno::Aluno(string n, string e, string c, int m)
    : Pessoa{n, e}, curso{c}, matricula{m}{}

void Aluno::setCurso(string c){
    curso = c;
}
void Aluno::print(){
    Pessoa::print();
    cout << "Curso: " << curso << "\n";
    cout << "Matricula: " << matricula << "\n";
}