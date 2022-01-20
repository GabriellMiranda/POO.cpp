#include <iostream>
#include <cstdlib>
#define SIZE 10
//Alocação dinamica de memória
using namespace std;

int main(){
    int *vet = nullptr;
    vet = new int[SIZE]; //alocando um vetor de tamanho 50;
    for(int i = 0; i < SIZE; i ++){
        vet[i] = rand() % 10;
    }

    cout << "Vetor dinamico criado:\n";
    for(int i = 0; i < SIZE; i ++){
        cout << vet[i] << " ";
    }
    delete[] vet;
    return 0;
}