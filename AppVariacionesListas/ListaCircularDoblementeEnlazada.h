#ifndef LISTACIRCULARDOBLEMENTEENLAZADA_H
#define LISTACIRCULARDOBLEMENTEENLAZADA_H
#include "Nodo.h"
#include <string>
using namespace std;

class ListaCircularDoblementeEnlazada
{
public:
    //constructor
    ListaCircularDoblementeEnlazada();

    //accessors
    Nodo* getCabeza() const;
    void setCabeza(Nodo* cabeza);
    Nodo* getAnterior() const;
    void setAnterior(Nodo* anterior);
    int getLargo();
    void setLargo(int);

protected:
    Nodo* cabeza;
    Nodo* anterior;
    int largo;
};

#endif

