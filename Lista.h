
#ifndef LISTA_SIMPLE_TEMPLATES_LISTA_H
#define LISTA_SIMPLE_TEMPLATES_LISTA_H

#include "Nodo.cpp"//no el .h

template<class tipo>
class Lista {
private:
    Nodo<tipo>* raiz;
public:
    Lista();

    virtual ~Lista();

    string toString();
    tipo* inicio();
    void borraInicio();
    void agregarInicio(tipo*);
};



#endif //LISTA_SIMPLE_TEMPLATES_LISTA_H
