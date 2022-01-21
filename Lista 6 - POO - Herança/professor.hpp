#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "pessoa.hpp"
/*
como poderia ser se professor erdasse mais de uma classe:

class Professor: public Pessoa, public Aluno{}

*/
class Professor : public Pessoa{
    private:
        int siape;
        int categoria;
        string instituto;
    public:
        Professor(string, string, int, int, string);
        ~Professor(){}
        int promover(){return ++categoria;}
        void setInstituto(string i){ instituto = i;}
        void print();
};




#endif