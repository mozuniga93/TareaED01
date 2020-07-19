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
    string recorrerListaCircularDoblementeEnlazada();

protected:
    Nodo* primero;
    Nodo* ultimo;
    int largo;
};

#endif

