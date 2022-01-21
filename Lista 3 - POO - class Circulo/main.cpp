#include <iostream>
#include "circulo.hpp"

using namespace std;

int main(){
    circulo c1;
    circulo c2(15.7, 8.9, -5.1);
    circulo c3(1.0, 9, 9);

    cout << "\nCirculo 1\n";
    c1.imprime();
    cout << "\nCirculo 2\n";
    c2.imprime();
    cout << "\nCirculo 3\n";
    c3.imprime();
    return 0;
}