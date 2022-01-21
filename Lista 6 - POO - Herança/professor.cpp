#include "professor.hpp"

Professor::Professor(string n, string e, int s, int c, string i): Pessoa{n, e}{
    siape = s;
    categoria = c;
    instituto = i;
}


void Professor::print(){
    Pessoa::print();
    cout << "SIAPE: " << siape << "\n";
    cout << "Categoria: " << categoria << "\n";
    cout << "Instituto: " << instituto << "\n";
}