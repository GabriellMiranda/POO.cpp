#ifndef CIRCULO_H
#define CIRCULO_H

class circulo{
    private:
        float radius;
        int x, y;

    public:
        circulo(); //Construtor padrão
        circulo(float, int, int);
        float area();
        float diameter();
        void set_radius(float);
        void set_origin(int, int);
        float get_radius();
        void imprime();
        ~circulo(){};
};




#endif