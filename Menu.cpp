

#include "Menu.h"

Menu::Menu() {
    miHanoi = new Hanoi();
}

Menu::~Menu() {

}

int opcion = 1;
int b;
int n;

void Menu::menu() {
    int dis =0;
    cout<<"Bievenido! Por favor Digite la cantidad de discos con la cual jugar:"<<endl;
    cin>>dis;
    miHanoi->setDiscos(dis);
    miHanoi->start();

    while (opcion != 0) {
        cout << ("      _______________________________________________________________________") << endl;
        cout << ("     |                      Torres De Hanoi Wendy Largaespada                |") << endl;
        cout << ("     | ----------------------------------------------------------------------|") << endl;
        cout << ("     |                    -->DIGITE 1:| Ingresar al Juego                    |") << endl;
        cout << ("     | ----------------------------------------------------------------------|") << endl;
        cout << ("     |-->DIGITE 2:| Mostrar el minimo nimero de movimientos para ganar.      |") << endl;
        cout << ("     | ----------------------------------------------------------------------|") << endl;
        cout << ("     |-->DIGITE 3:| Mostrar el algoritmo completo paso a paso de la solucion |") << endl;
        cout << ("     | ----------------------------------------------------------------------|") << endl;
        cout << ("     |                      -->DIGITE 0:| Salir                              |") << endl;
        cout << ("     | ----------------------------------------------------------------------|") << endl;
        cout << "Digite una opcion del menu: ";
        cout<<endl;
        cin >> opcion;

        switch (opcion) {
            case 0:
                opcion0();
                break;
            case 1:
                opcion1();
                break;
            case 2:
                opcion2();
                break;
            case 3:
                opcion3();
                break;
            default:
                cout << "LA OPCION SELECCIONADA NO EXISTE\n";
                break;
        }
    }
    exit(0);
}

void Menu::opcion0() {
    cout << "<----------------------( 0 )  - Salir ----------------------> " << endl;
    cout << "\n 1- Si";
    cout << "\n 2- No \n\n";
    cin >> b;
    cout << "\n ";
    if (b == 1) {
        cout << "---------GRACIAS POR UTILIZAR NUESTRA APLICACION---------" << endl;
        exit(0);
    } else {
        cout << "---------GRACIAS POR CONTINUAR UTILIZANDO NUESTRA APLICACION---------" << endl;
        cout << "<<Digita Enter>>" << endl;
        opcion = 7;
        cin.get();
        cin.get();
    }
}

void Menu::opcion1() {
    cout << "----------(1)-  Ingresar al Juego  -------------" << endl;

    miHanoi->jugar();
    miHanoi->reinicio();
    cout << "<<Digita Enter>>" << endl;
    cin.get();
}

void Menu::opcion2() {
    cout << "----------(2)- Mostrar el minimo nimero de movimientos para ganar----------" << endl;
//
    cout << "Movimientos minimos necesarios para ganar: ";
    cout<<miHanoi->canMoves(miHanoi->getDiscos())<<endl;
    cout << endl;
    cout << "<<Digita Enter>>" << endl;
    cin.get();
}

void Menu::opcion3() {
    cout << "----------( 3 )-Mostrar el algoritmo completo paso a paso de la solucion----------" << endl;
    int contra =0;
    cout<<"Por favor digite la constrasena secreta : "<<endl;
    cin>>contra;
    if (contra==123){
        string Torre1 = "A", Torre2 = "B", Torre3 = "C";
        cout<<miHanoi->mostrarAlgoritmo(miHanoi->getDiscos(),Torre1,Torre2,Torre3);
    } else{
        cout<<"Contrasena invalida !!"<<endl;
    }
    cout << endl;
    cout << "<<Digita Enter>>" << endl;
    cin.get();
}

