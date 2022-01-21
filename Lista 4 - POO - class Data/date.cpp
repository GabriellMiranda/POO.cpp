#include <iostream>
#include "date.hpp"

using namespace std;

int Date:: howmany = 0;

Date::Date(){
    d = 1;
    m = 1;
    y = 1998;
}

Date::Date(int d, int m, int y){
    setDay(d);
    setMonth(m);
    setYear(y);
    howmany++;
}

Date:: ~Date(){
    cout << "Objeto destruido!\n";
    howmany--;
}

void Date::setDay(int d){
    if(d > 0 and d < 31){
        this->d = d;
    }else{
        this->d = 1;
    }
}
void Date::setMonth(int m){
    if(m >0 and m < 13){
        this->m = m;
    }else{
        this->m = m;
    }
}
void Date::setYear(int y){
    if(y > 1998){
        this->y = y;
    }else{
        this->y = y;
    }
}

void Date::imprimeDate(){
    cout << d << "/" << m << "/" << y <<"\n";
}