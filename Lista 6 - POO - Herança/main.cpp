#include "pessoa.hpp"
#include "aluno.hpp"
#include "professor.hpp"
#include <iostream>

/*
 Neste exercicio a classe aluno e professor erdaram a classe do tipo 
 pessoa já que ela tinha atributos que pertenciam as duas classes.
*/

using namespace std;

int main(){
    Pessoa p1{"Gabriel", "Abaete-MG"};
    cout << "Pessoa apenas: \n";
    p1.print();

    cout << "\nAluno:\n";
    Aluno a1{"Vitor","Betim-MG", "ECO",1234};
    a1.print();

    cout << "\nProfessor: \n";
    Professor pr1{"Miranda", "Florestal-MG", 6789, 3, "ICA"};
    pr1.print();
    return 0;
}