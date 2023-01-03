

#include "Nodo.h"
template<class tipo>
Nodo<tipo>::Nodo() {
    datos= nullptr;
    siguiente= nullptr;
}

template<class tipo>
tipo *Nodo<tipo>::getDatos() const {
    return datos;
}

template<class tipo>
void Nodo<tipo>::setDatos(tipo *datos) {
    Nodo::datos = datos;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getSiguiente() const {
    return siguiente;
}

template<class tipo>
void Nodo<tipo>::setSiguiente(Nodo *siguiente) {
    Nodo::siguiente = siguiente;
}
