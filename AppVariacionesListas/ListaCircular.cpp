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
            rslt += "Dato(" + to_string(contador) + ")=" + to_string(aux->getInfo()) + "\n";
            aux = aux->getSig();
            contador++;
        } while (aux!= raiz);
    }
    return rslt;
}

