#include <iostream>
#include "date.hpp"

using namespace std;

int main(){
    // const Date aniversario(2,3,1990) - O objeto do tipo const nunca será modificado;
    Date date1(9,6,1999);
    cout << "Aniversario do Gabriel:\n";
    date1.imprimeDate();
    cout << "Mes aniversario Gabriel:" << date1.getMonth();
    date1.~Date();

    Date today(21,1,2022);
    cout<<"today: ";
    today.imprimeDate();

    cout << "\nQuantas instancias ativas?" << Date::how_many_instancer();
    return 0;

}