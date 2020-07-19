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
    Nodo* getPrimero() const;
    void setPrimero(Nodo* cabeza);
    Nodo* getUltimo() const;
    void setUltimo(Nodo* cabeza);
    int getLargo();
    void setLargo(int);
    bool insertarElemento(int);
    bool eliminarElemento(int);
    int buscarElemento(int);
    bool verificarListaVacia();
    string recorrerListaCircular();

protected:
    Nodo* primero;
    Nodo* ultimo;
    int largo;
};

#endif
