#pragma once
#include "Nodo.h"
#include <string>
using namespace std;
class ListaDoblementeEnlazada
{
public:
    ListaDoblementeEnlazada();

    //accessors
    Nodo* getCabeza() const;
    void setCabeza(Nodo* cabeza);
    Nodo* getAnteriorL() const;
    void setAnteriorL(Nodo* anterior);
    Nodo* getSiguiente() const;
    void setSiguiente(Nodo* anterior);
    int getLargo();
    void setLargo(int);
    bool insertarElemento(int);
    bool eliminarElemento(int);
    int buscarElemento(int);
    bool verificarListaVacia();
    string recorrerDoblementeEnlazada();

protected:
    Nodo* cabeza;
    Nodo* anteriorL;
    Nodo* siguieteL;
    int largo;
};
