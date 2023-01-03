

#ifndef MENUFUNCIONAL_MENU_H
#define MENUFUNCIONAL_MENU_H

#include "Hanoi.h"

class Menu {
private:
    Hanoi *miHanoi;
public:
    Menu();

    virtual ~Menu();

    void menu();

    void opcion0();

    void opcion1();

    void opcion2();

    void opcion3();

};


#endif //MENUFUNCIONAL_MENU_H
