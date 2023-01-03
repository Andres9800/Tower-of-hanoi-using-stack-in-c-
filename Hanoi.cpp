

#include "Hanoi.h"



Hanoi::~Hanoi() {

}
string Hanoi::toString() {
    stringstream ss;
    ss<<"Pila A:\n"<<A->toString();
    ss<<"Pila B:\n"<<B->toString();
    ss<<"Pila C:\n"<<C->toString();
    return ss.str();
}

Hanoi::Hanoi() : discos(0) , A(new PilaLista<int>),B(new PilaLista<int>),C(new PilaLista<int>) {

}


int Hanoi::valorInicio(int discos) {
    return (discos+5)*pow(discos+10,discos+1);
}

int Hanoi::canMoves(int discosT) {
    if(discosT == 1)
        return 1;
    else
        return 2 * canMoves(discosT-1) + 1;
}

int Hanoi::getDiscos() const {
    return discos;
}

void Hanoi::setDiscos(int discos) {
    Hanoi::discos = discos;
}

PilaLista<int> *Hanoi::getA() const {
    return A;
}

void Hanoi::setA(PilaLista<int> *a) {
    A = a;
}

PilaLista<int> *Hanoi::getB() const {
    return B;
}

void Hanoi::setB(PilaLista<int> *b) {
    B = b;
}

PilaLista<int> *Hanoi::getC() const {
    return C;
}

void Hanoi::setC(PilaLista<int> *c) {
    C = c;
}

string Hanoi::mostrarAlgoritmo(int disc,string A, string B, string C) {
    stringstream ss;
    if (disc==1){
        cout<<"Mover disco de la torre "<<A<<" hacia la torre "<<C<<endl;
    }else{
        mostrarAlgoritmo( disc-1,  A,  C,  B);
        cout<<"Mover disco de la torre "<<A<<" hacia la torre "<<C<<endl;
        mostrarAlgoritmo( disc-1,  B,  A,  C);
    }
    return ss.str();
}

void Hanoi::jugar() {
    int movimientos = 0;

    cout<<"Inicio del juego: "<<endl;
    cout<<toString();
    int pila=0;
    int opcion=0;

    do {
    cout<<"Que Pila desea escoger (1 ) para A : (2) para B : (3) para C "<<endl;
    cin>>pila;
if (pila==1){
    if (A->empty()){
        cout<<"Pila Vacia, no se puede usar"<<endl;
    } else{
        cout<<"A donde quiere mover el disco ? : (2) para B : (3) para C "<<endl;
        cin>>opcion;
        if (opcion==2){
            if (B->empty()){
                B->push(A->top());
                A->pop();
                movimientos++;
            } else{
                if (*B->top()>*A->top()){
                    B->push(A->top());
                    A->pop();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
        if (opcion==3){
            if (C->empty()){
                C->push(A->top());
                A->pop();
                movimientos++;
            } else{
                if (*C->top()>*A->top()){
                    C->push(A->top());
                    A->pop();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
    }
}
if (pila==2){
    if (B->empty()){
        cout<<"Pila Vacia, no se puede usar"<<endl;
    }else{
        cout<<"A donde quiere mover el disco ? : (1) para A : (3) para C "<<endl;
        cin>>opcion;
        if (opcion==1){
            if (A->empty()){
                A->push(B->top());
                B->pop();
                movimientos++;
            } else{
                if (*A->top()>*B->top()){
                    A->push(B->top());
                    B->pop();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
        if (opcion==3){
            if (C->empty()){
                C->push(B->top());
                B->pop();
                movimientos++;
            } else{
                if (*C->top()>*B->top()){
                    C->push(B->top());
                    B->pop();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
    }
}if (pila==3){
    if (C->empty()){
        cout<<"Pila Vacia, no se puede usar"<<endl;
    }else{
        cout<<"A donde quiere mover el disco ? : (1) para A : (2) para B "<<endl;
        cin>>opcion;
        if (opcion==1){
            if (A->empty()){
                A->push(C->top());
                C->pop();
                movimientos++;
            } else{
                if (*A->top()>*C->top()){
                    A->push(C->top());
                    C->pop();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
        if (opcion==2){
            if (B->empty()){
                B->push(C->top());
                C->pop();
                movimientos++;
            } else{
                if (*B->top()>*C->top()){
                    B->push(C->top());
                    C->pop();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
    }
}else{
    //cout<<"Escoga una pila correcta"<<endl;
}
    cout<<"Cantidad de Movimientos actuales: "<<movimientos<<endl;
    cout<<toString();

    } while (C->size()!=discos);

    cout<<"JUEGO TERMINADO GRACIAS POR JUGAR "<<endl;
    movimientos = 0 ;
    int numeroT = 0;
    cout<<"Desea Reiniciar el juego? Digite (1) para SI (2) para NO "<<endl;
    cin>>numeroT;
    if (numeroT==1){
        reinicio();
        jugar();
    } else{
        cout<<"GAME OVER"<<endl;
    }
}

void Hanoi::start() {
    int i = discos-1;
    do{
        A->push(new int(valorInicio(i)));
        i--;
    } while (i>=0);
}

void Hanoi::reinicio() {
    while(!A->empty()){
        A->pop();
    }
    while(!B->empty()){
        B->pop();
    }
    while(!C->empty()){
        C->pop();
    }
    start();
}








