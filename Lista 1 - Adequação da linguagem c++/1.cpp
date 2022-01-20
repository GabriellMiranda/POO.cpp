#include <iostream> //Entrada e saída

using namespace std; //Como eu vou usar std em várias partes do programa não vou precisar ficar colocando std mais, já que eu já adcionei isso aqui.

int square(int num); //Prototipo da função

int main(){
    int n;
    cout << "Entre com inteiro:";
    cin >> n;
    cout << "n^2 = " << n*n << "\n";
    cout << "Usando a funcao para o quadrado:"<<square(n)<<"\n";
    
    return 0;
}

// implementações
int square(int num){
    return num*num;
}