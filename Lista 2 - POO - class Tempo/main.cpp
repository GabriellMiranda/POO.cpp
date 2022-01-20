#include <iostream>
#include "tempo.h"

using namespace std;

int main(){
    Tempo padrao;
    Tempo custom(11, 20, 36);
    cout << "Hora padrao:\n";
    padrao.imprime();

    cout << "\nHora customizada: ";
    custom.imprime();
    return 0;
}