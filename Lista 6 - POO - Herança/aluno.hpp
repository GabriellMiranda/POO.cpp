#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.hpp"

class Aluno : public Pessoa{
    private:
        string curso;
        int matricula;
    public:
        Aluno(string, string, string, int);
        ~Aluno(){}
        void setCurso(string);
        void print();
};

#endif