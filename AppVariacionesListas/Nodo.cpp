#include "Nodo.h"
#include "stddef.h"

//constructor
Nodo::Nodo()
{
    setInfo(0);
    setSig(NULL);
    setAnt(NULL);
}

Nodo::Nodo(int info, Nodo* sig) : info(info), sig(sig), ant(ant)
{
}

Nodo::Nodo(int info) : info(info), sig(NULL), ant(NULL)
{
}
//accessors
int Nodo::getInfo() const {
    return info;
}
void Nodo::setInfo(int info) {
    Nodo::info = info;
}

Nodo* Nodo::getSig() const {
    return sig;
}
void Nodo::setSig(Nodo* sig) {
    Nodo::sig = sig;
}
Nodo* Nodo::getAnt() const {
    return ant;
}
void Nodo::setAnt(Nodo* ant) {
    Nodo::ant = ant;
}
