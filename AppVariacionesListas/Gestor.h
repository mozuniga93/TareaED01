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
    //1. Metodos para lista circular
    string insertarElementoListaCircular(const int);
    string mostrarListaCircular();
    string eliminarElementoListaCircular(const int);
    string buscarElementoListaCircular(const int);
    string verificarListaVaciaCircular();
    int mostrarLargoListaCircular();
    //2. Metodos para lista circular doblemente enlazada
    string insertarElementoListaCircularDoblementeEnlazada(const int);
    string mostrarListaCircularDoblementeEnlazada();
    string eliminarElementoListaCircularDoblementeEnlazada(const int);
    string buscarElementoListaCircularDoblementeEnlazada(const int);
    string verificarListaVaciaCircularDoblementeEnlazada();
    int mostrarLargoListaCircularDoblementeEnlazada();
    //3.Metodos para la lista doblemente enlazada
    string insertarElementoListaDoblementeEnlazada(const int);
    string mostrarListaDoblementeEnlazada();
    string eliminarElementoListaDoblementeEnlazada(int);
    string verificarListaVaciaDoblementeEnlazada();
    int mostrarLargoListaDoblementeEnlazada();
    //4. Metodos para bicola
    void agregarAlfrente(int);
    void agregarAlfinal(int);
    int removerAlfrente();
    int removerAlfinal();
    string esVacio();
    int longitud();
};

#endif