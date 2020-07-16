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

bool ListaCircularDoblementeEnlazada::insertarElemento(int pDato) {
    Nodo* nuevo = new Nodo();
    nuevo->setInfo(pDato);
    if (getCabeza() == NULL) {
        setCabeza(nuevo);
        nuevo->setSig(nuevo);
    }
    else {
        nuevo->setSig(this->cabeza);
        setCabeza(nuevo);
    }
    setLargo(getLargo() + 1);
    return true;
}

bool ListaCircularDoblementeEnlazada::eliminarElemento(int) {
    return true;
}
int ListaCircularDoblementeEnlazada::buscarElemento(int) {
    return -1;
}
bool ListaCircularDoblementeEnlazada::verificarListaVacia() {
    return true;
}
string ListaCircularDoblementeEnlazada::recorrerListaCircularDoblementeEnlazada() {
    return "";
}

