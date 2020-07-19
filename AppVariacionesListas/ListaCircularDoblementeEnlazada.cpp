#include "ListaCircularDoblementeEnlazada.h"
#include "stddef.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//constructor
ListaCircularDoblementeEnlazada::ListaCircularDoblementeEnlazada()
{
    setPrimero(NULL);
    setUltimo(NULL);
    setLargo(0);
}

//accessors
Nodo* ListaCircularDoblementeEnlazada::getPrimero() const {
    return primero;
}
void ListaCircularDoblementeEnlazada::setPrimero(Nodo* primero) {
    ListaCircularDoblementeEnlazada::primero = primero;
}

Nodo* ListaCircularDoblementeEnlazada::getUltimo() const {
    return ultimo;
}
void ListaCircularDoblementeEnlazada::setUltimo(Nodo* ultimo) {
    ListaCircularDoblementeEnlazada::ultimo = ultimo;
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
    if (getPrimero() == NULL) {
        setPrimero(nuevo);
        setUltimo(nuevo);
        getPrimero()->setSig(getPrimero());
        getPrimero()->setAnt(getUltimo());
    }
    else {
        getUltimo()->setSig(nuevo);
        nuevo->setAnt(getUltimo());
        nuevo->setSig(getPrimero());
        setUltimo(nuevo);
        getPrimero()->setAnt(getUltimo());
    }
    setLargo(getLargo() + 1);
    return true;
}

bool ListaCircularDoblementeEnlazada::eliminarElemento(int pDato) {
    Nodo* aux = new Nodo();
    aux = getPrimero();

    //Primero verificar si esta vacia
    if (verificarListaVacia()) {
        return false;
    }
    //Hacer que lista apunte al nodo anterior al de valor v
    do {
        if (getPrimero()->getSig()->getInfo() != pDato) {
            setPrimero(getPrimero()->getSig());
        }
    } while (getPrimero()->getSig()->getInfo() != pDato && aux != getPrimero());

    // Si existe un nodo con el valor pDato:
    if (getPrimero()->getSig()->getInfo() == pDato) {
        // Y si la lista sólo tiene un nodo
        if (getPrimero() == getPrimero()->getSig()) {
            delete getPrimero();
            setPrimero(NULL);
            setUltimo(NULL);
            setLargo(getLargo() - 1);
        }
        else {
            // Si la lista tiene más de un nodo, borrar el nodo  de valor pDato
            aux = getPrimero()->getSig();
            getPrimero()->setSig(aux->getSig());
            delete aux;
            setLargo(getLargo() - 1);
        }
    }
    return true;
}
int ListaCircularDoblementeEnlazada::buscarElemento(int pDato) {
    Nodo* raiz = getPrimero();
    if (getPrimero() == NULL) {
        return -1;
    }
    else {
        Nodo* aux = getPrimero();
        int pos = 1;
        do {
            if (aux->getInfo() == pDato) {
                return pos;
                break;
            }
            aux = aux->getSig();
            pos++;
        } while (aux != raiz);
    }
    return -1;
}
bool ListaCircularDoblementeEnlazada::verificarListaVacia() {
    if (getPrimero() == NULL)
        return true;
    else
        return false;
}
string ListaCircularDoblementeEnlazada::recorrerListaCircularDoblementeEnlazada() {
    string rslt = "";
    Nodo* raiz = getPrimero();
    if (getPrimero() == NULL) {
        rslt = "Lista vacia";
    }
    else {
        Nodo* aux = getPrimero();
        int contador = 1;
        do {
            rslt += "Dato(" + to_string(contador) + ")=" + to_string(aux->getInfo()) + "\n";
            aux = aux->getSig();
            contador++;
        } while (aux != raiz);
    }
    return rslt;
}

