#include "circulo.hpp"
#include "iostream"
using namespace std;

circulo::circulo(){
    radius = 0.0;
    x = 0;
    y = 0;
}
circulo::circulo(float radius, int x, int y){
    this->radius = radius;
    this->x = x;
    this->y = y;
}

float circulo::area(){
    return radius*radius*3.141592;
}

float circulo::diameter(){
    return radius*2;
}

void circulo::set_radius(float rr){
    if(rr > 0) radius = rr;
    else radius = 0;
}

void circulo::set_origin(int xx, int yy){
    x = xx; y = yy;
}

float circulo::get_radius(){
    return radius;
}

void circulo::imprime(){
    cout << "{radius:" << radius << ",X: "<< x << ",y" << y << "}";
}