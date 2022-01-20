#ifndef TEMPO_H
#define TEMPO_H

class Tempo{
    //membros privados
    private:
      int hora, minuto, segundo;

    public:
        Tempo(); // construtor - inicializar
        Tempo(int, int , int);
        void setTempo(int, int, int);
        void imprime();
        ~Tempo(){}; //destrutor
};

#endif