#include <iostream>
//Manipulando vetores
using namespace std;

int main(){
    int vetor[] = {1,2,3,4,5,6,7};
    cout << "Percorrendo o vetor de maneira normal:\n";
    for(int i = 0; i < 7; i++){
        cout << vetor[i] << " - ";
    }

    cout <<"\nPercorrendo com o range-for: \n";
    for(int x : vetor){
        cout << x << " - ";
    }
    return 0;
}