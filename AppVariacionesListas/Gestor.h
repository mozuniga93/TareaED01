#ifndef GESTOR_H
#define GESTOR_H
#include "Nodo.h"
#include "ListaCircular.h"
#include "ListaDoblementeEnlazada.h"
#include "ListaCircularDoblementeEnlazada.h"
#include "Bicola.h"
#include <string>
using namespace std;

class Gestor
{
private:
    ListaCircular listaCircular;
    ListaDoblementeEnlazada listaDoblementeEnlazada;
    ListaCircularDoblementeEnlazada listaCircularDoblementeEnlazada;
    Bicola bicola;
public:
 
};

#endif