#include "ListaCircular.h"
#include "stddef.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//constructor
ListaCircular::ListaCircular()
{
    setCabeza(NULL);
    setLargo(0);
}

//accessors
Nodo* ListaCircular::getCabeza() const {
    return cabeza;
}
void ListaCircular::setCabeza(Nodo* cabeza) {
    ListaCircular::cabeza = cabeza;
}

int ListaCircular::getLargo() {
    return largo;
}
void ListaCircular::setLargo(int largo) {
    ListaCircular::largo = largo;
}

bool ListaCircular::insertarElemento(int pDato) {
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

bool ListaCircular::eliminarElemento(int) {
    return true;
}
int ListaCircular::buscarElemento(int) {
    return -1;
}
bool ListaCircular::verificarListaVacia() {
    return true;
}
string ListaCircular::recorrerListaCircular() {
    return "";
}

