#include "ListaCircularDoblementeEnlazada.h"
#include "stddef.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//constructor
ListaCircularDoblementeEnlazada::ListaCircularDoblementeEnlazada()
{
    setCabeza(NULL);
    setLargo(0);
}

//accessors
Nodo* ListaCircularDoblementeEnlazada::getCabeza() const {
    return cabeza;
}
void ListaCircularDoblementeEnlazada::setCabeza(Nodo* cabeza) {
    ListaCircularDoblementeEnlazada::cabeza = cabeza;
}

Nodo* ListaCircularDoblementeEnlazada::getAnterior() const {
    return anterior;
}
void ListaCircularDoblementeEnlazada::setAnterior(Nodo* anterior) {
    ListaCircularDoblementeEnlazada::anterior = anterior;
}


int ListaCircularDoblementeEnlazada::getLargo() {
    return largo;
}
void ListaCircularDoblementeEnlazada::setLargo(int largo) {
    ListaCircularDoblementeEnlazada::largo = largo;
}
