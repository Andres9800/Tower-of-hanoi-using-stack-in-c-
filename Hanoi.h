

#ifndef HANOISTACKWENDYLARGAESPADAEXAMEN_HANOI_H
#define HANOISTACKWENDYLARGAESPADAEXAMEN_HANOI_H

#include "PilaLista.cpp"
class Hanoi {
private:
    int discos;
    PilaLista<int> *A;
    PilaLista<int> *B;
    PilaLista<int> *C;
public:

    Hanoi();

    void start();

    void reinicio();

    int getDiscos() const;

    void setDiscos(int discos);

    PilaLista<int> *getA() const;

    void setA(PilaLista<int> *a);

    PilaLista<int> *getB() const;

    void setB(PilaLista<int> *b);

    PilaLista<int> *getC() const;

    void setC(PilaLista<int> *c);

    int valorInicio(int discos);

    virtual ~Hanoi();

    int canMoves(int discosT);

    string toString();

    string mostrarAlgoritmo(int dis,string A, string B, string C);

    void jugar();


};


#endif //HANOISTACKWENDYLARGAESPADAEXAMEN_HANOI_H
