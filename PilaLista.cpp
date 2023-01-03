

#include "PilaLista.h"
template<class tipo>
PilaLista<tipo>::PilaLista(): S(new Lista<tipo>), h(0) {
}

template<class tipo>
PilaLista<tipo>::~PilaLista() {
    delete S;
}

template<class tipo>
int PilaLista<tipo>::size() {
    return h;
}

template<class tipo>
bool PilaLista<tipo>::empty() const {
    return h == 0;
}

template<class tipo>
void PilaLista<tipo>::push(tipo *e) {
    ++h;
    S->agregarInicio(e);
}

template<class tipo>
tipo *PilaLista<tipo>::top() throw(StackEmpty) {
    if (empty()){
        throw StackEmpty("Top sobre un stack vacio!");
    }
    return S->inicio();
}
template<class tipo>
void PilaLista<tipo>::pop() throw(StackEmpty) {
    if (empty()){
        throw StackEmpty("Top sobre un stack vacio!");
    }
    h--;
    return S->borraInicio();

}

template<class tipo>
string PilaLista<tipo>::toString() {
    stringstream ss;
    ss<<S->toString();
    return ss.str();
}
