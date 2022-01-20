#include <iostream>

using namespace std;

void soma(int x, int y, int *z){
    *z = x + y;
}

void soma2(int &x, int &y, int &z){ // a própria variável que está indo e não a referencia dela
    z = x + y;
}

int main(){
    int a = 3, b = 2, c = 0;
    soma(a,b,&c);
    cout<<"Valor de C (por referencia):" <<c;
    soma2(a, b, c);
    cout << "Valor de C (Sem passar o endereco):" << c;
    return 0;
}