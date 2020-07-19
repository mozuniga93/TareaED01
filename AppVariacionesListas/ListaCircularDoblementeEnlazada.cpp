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
                    getPrimero()->setAnt(getUltimo());
                    getUltimo()->setSig(getPrimero());
                    setLargo(getLargo() - 1);
                }
                else if (actual == getUltimo()) {
                    setUltimo(anterior);
                    getUltimo()->setSig(getPrimero());
                    getPrimero()->setAnt(getUltimo());
                    setLargo(getLargo() - 1);
                }
                else {

                    anterior->setSig(actual->getSig());
                    actual->getSig()->setAnt(anterior);
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
            rslt += "" + to_string(aux->getInfo()) + "\n";
            aux = aux->getSig();
            contador++;
        } while (aux != raiz);
    }
    return rslt;
}

