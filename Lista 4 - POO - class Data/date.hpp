#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int d, m, y;
    //mutable - este tipo de variável pode mudar
    static int howmany;
public:
    Date();
    Date(int, int, int);
    ~Date();
    
    //geters
    int getDay(){ return d;}
    int getMonth(){ return d;}
    int getYear(){ return d;}
    //seters
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    
    static int how_many_instancer(){return howmany;}
    void imprimeDate();
};

#endif
