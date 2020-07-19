#include "ListaDoblementeEnlazada.h"
#include "stddef.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//constructor
ListaDoblementeEnlazada::ListaDoblementeEnlazada()
{
    setCabeza(NULL);
    setLargo(0);
}

//accessors
Nodo* ListaDoblementeEnlazada::getCabeza() const {
    return cabeza;
}
//prueba de git
void ListaDoblementeEnlazada::setCabeza(Nodo* cabeza) {
    ListaDoblementeEnlazada::cabeza = cabeza;
}

Nodo* ListaDoblementeEnlazada::getAnteriorL() const {
    return anteriorL;
}
void ListaDoblementeEnlazada::setAnteriorL(Nodo* anterior) {
    ListaDoblementeEnlazada::anteriorL = anterior;
}
Nodo* ListaDoblementeEnlazada::getSiguiente() const {
    return siguieteL;
}
void ListaDoblementeEnlazada::setSiguiente(Nodo* anterior) {
    ListaDoblementeEnlazada::siguieteL = anterior;
}

int ListaDoblementeEnlazada::getLargo() {
    return largo;
}
void ListaDoblementeEnlazada::setLargo(int largo) {
    ListaDoblementeEnlazada::largo = largo;
}
//agregar al inicio
bool ListaDoblementeEnlazada::insertarElemento(int pDato) {

    Nodo* nuevo = new Nodo();
    nuevo->setInfo(pDato);
    nuevo->setSig(NULL);
    nuevo->setAnt(NULL);
    if (getCabeza() == NULL) {

        this->cabeza = nuevo;
        this->anteriorL = nuevo;
    }
    else {
        nuevo->setSig(cabeza);
        this->cabeza->setAnt(nuevo);
        this->cabeza = nuevo;
    }
    setLargo(getLargo() + 1);
    return true;
}

string ListaDoblementeEnlazada::recorrerDoblementeEnlazada() {
    string data = " ";
    int num = 1;
    if (getCabeza() == NULL) {
        data = "Lista vacia";
    }
    else {

        Nodo* aux = this->cabeza;
        while (aux != NULL) {
            data += to_string(num) + ". " + " " + to_string(aux->getInfo()) + "\n";
            aux = aux->getSig();


            num++;
        }
    }
    return data;
}
bool ListaDoblementeEnlazada::eliminarElemento(int pDato) {
    Nodo* aux; //= this->cabeza;
    if (pDato == 1) {
        aux = getCabeza();
        this->cabeza = this->cabeza->getSig();
        delete(aux);
        setLargo(getLargo() - 1);
    }
    else if (pDato == getLargo()) {
        aux = getAnteriorL();
        //this->cabeza->setSig(NULL);
        anteriorL = anteriorL->getAnt();
        anteriorL->setSig(nullptr);
        //aux->setSig(NULL);
        delete(aux);
        setLargo(getLargo() - 1);
    }
    else {
        return false;
    }
    return true;
}
bool ListaDoblementeEnlazada::verificarListaVacia() {
    if (getCabeza() == NULL) {
        return true;
    }
    else {
        return false;
    }
}