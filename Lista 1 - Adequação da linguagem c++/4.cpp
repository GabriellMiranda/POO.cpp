#include <iostream>
using namespace std;

int main(){
    int a = 50;
    cout << "Valor de a:" << a << "\n";
    cout << "Endereco de a:" << &a << "\n";

    int* ponteiro = nullptr;
    ponteiro = &a;
    cout << "Valor do ponteiro de a: "<< ponteiro <<"\n";
    cout << "Valor de a acessado pelo ponteiro:" << *ponteiro << "\n";

    return 0;
}