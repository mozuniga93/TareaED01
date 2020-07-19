#include "ListaCircular.h"
#include "stddef.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//constructor
ListaCircular::ListaCircular()
{
    setPrimero(NULL);
    setUltimo(NULL);
    setLargo(0);
}

//accessors
Nodo* ListaCircular::getPrimero() const {
    return primero;
}
void ListaCircular::setPrimero(Nodo* primero) {
    ListaCircular::primero = primero;
}

Nodo* ListaCircular::getUltimo() const {
    return ultimo;
}
void ListaCircular::setUltimo(Nodo* ultimo) {
    ListaCircular::ultimo = ultimo;
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
    if (getPrimero() == NULL) {
        setPrimero(nuevo);
        getPrimero()->setSig(getPrimero());
        setUltimo(getPrimero());
    }
    else {
        getUltimo()->setSig(nuevo);
        nuevo->setSig(getPrimero());
        setUltimo(nuevo);
    }
    setLargo(getLargo() + 1);
    return true;
}

bool ListaCircular::eliminarElemento(int pDato) {
    Nodo* actual = new Nodo();
    actual = getPrimero();
    Nodo* anterior = new Nodo();
    anterior = NULL;
    bool encontrado = false;
    if (getPrimero() != NULL) {
        do {

            if (actual->getInfo() == pDato) {

                if (getPrimero()->getSig() == getPrimero()) {
                    delete getPrimero();
                    setPrimero(NULL);
                    setUltimo(NULL);
                    setLargo(getLargo() - 1);
                }
                else if (actual == getPrimero()) {
                    setPrimero(getPrimero()->getSig());
                    getUltimo()->setSig(getPrimero());
                    setLargo(getLargo() - 1);
                }
                else if (actual == getUltimo()) {
                    anterior->setSig(primero);
                    setUltimo(anterior);
                }
                else {
                    anterior->setSig(actual->getSig());
                    setLargo(getLargo() - 1);
                }
                encontrado = true;
            }
            anterior = actual;
            actual = actual->getSig();
        } while (actual != primero && encontrado != true);

        if (!encontrado) {
            return encontrado;
        }

    }
    else {
        return encontrado;
    }
    return encontrado;
}

int ListaCircular::buscarElemento(int pDato) {
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
bool ListaCircular::verificarListaVacia() {
        if (getPrimero() == NULL)
            return true;
        else
            return false;
}

string ListaCircular::recorrerListaCircular() {
    string rslt = "";
    Nodo* raiz = getPrimero();
    if (getPrimero() == NULL) {
        rslt = "Lista vacia";
    }
    else {
        Nodo* aux = getPrimero();
        int contador = 1;
        do {
            rslt += "" + to_string(aux->getInfo()) + "\n";
            aux = aux->getSig();
            contador++;
        } while (aux!= raiz);
    }
    return rslt;
}

