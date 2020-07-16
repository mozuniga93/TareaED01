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
