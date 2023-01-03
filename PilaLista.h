
#ifndef LISTA_SIMPLE_TEMPLATES_PILALISTA_H
#define LISTA_SIMPLE_TEMPLATES_PILALISTA_H

#include "Lista.cpp"
#include "RuntimeException.h"

template<class tipo>
class PilaLista {
private:
    Lista<tipo> *S;
    int h;
public:
    PilaLista();
    ~PilaLista();
    int size();
    bool empty() const;
    tipo *top() throw(StackEmpty);
    void push(tipo *e);
    void pop() throw(StackEmpty);
    string toString();
};



#endif //LISTA_SIMPLE_TEMPLATES_PILALISTA_H
