#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include "Nodo.h"
#include <string>
using namespace std;

class ListaCircular
{
public:
    //constructor
    ListaCircular();

    //accessors
    Nodo* getCabeza() const;
    void setCabeza(Nodo* cabeza);
    int getLargo();
    void setLargo(int);

protected:
    Nodo* cabeza;
    int largo;
};

#endif
