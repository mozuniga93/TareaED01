#include "Gestor.h"
#include "ListaCircular.h"
#include "ListaDoblementeEnlazada.h"
#include "ListaCircularDoblementeEnlazada.h"
#include "Bicola.h"

//1. Metodos para lista circular
string Gestor::insertarElementoListaCircular(const int pDato) {
	bool msg;
	string resp;
	msg = listaCircular.insertarElemento(pDato);
	if (msg) {
		resp = "Numero entero agregado con exito.";
	}
	else {
		resp = "Numero entero no se pudo agregar. Intente de nuevo.";
	}
	return resp;
}
string Gestor::mostrarListaCircular() {
	string msg = listaCircular.recorrerListaCircular();
	return msg;
}
string Gestor::eliminarElementoListaCircular(const int pDato) {
	bool msg;
	string resp;
	msg = listaCircular.eliminarElemento(pDato);
	if (msg) {
		resp = "Numero entero eliminado con exito.";
	}
	else {
		resp = "Numero entero no existe en la lista. Intente de nuevo.";
	}
	return resp;
}
string Gestor::buscarElementoListaCircular(const int pDato) {
	int pos = listaCircular.buscarElemento(pDato);
	string msg;
	if (pos == -1) {
		msg = "El dato " + to_string(pDato) + " no se encuentra en la lista.";
	}
	else {
		msg += "El dato " + to_string(pDato) + " si se encuentra en la lista en la posicion " + to_string(pos) + "\n";
	}
	return msg;
}
string Gestor::verificarListaVaciaCircular() {
	bool cond = listaCircular.verificarListaVacia();
	string msg;
	if (cond) {
		msg = "La lista se encuentra vacia.";
	}
	else {
		msg = "La lista no se encuentra vacia.";
	}
	return msg;
}
int Gestor::mostrarLargoListaCircular() {
	int largo;
	largo = listaCircular.getLargo();
	return largo;
}
//2. Metodos para lista circular doblemente enlazada
string Gestor::insertarElementoListaCircularDoblementeEnlazada(const int pDato) {
	bool msg;
	string resp;
	msg = listaCircularDoblementeEnlazada.insertarElemento(pDato);
	if (msg) {
		resp = "Numero entero agregado con exito.";
	}
	else {
		resp = "Numero entero no se pudo agregar. Intente de nuevo.";
	}
	return resp;
}
string Gestor::mostrarListaCircularDoblementeEnlazada() {
	string msg = listaCircularDoblementeEnlazada.recorrerListaCircularDoblementeEnlazada();
	return msg;
}
string Gestor::eliminarElementoListaCircularDoblementeEnlazada(const int pDato) {
	bool msg;
	string resp;
	msg = listaCircularDoblementeEnlazada.eliminarElemento(pDato);
	if (msg) {
		resp = "Numero entero eliminado con exito.";
	}
	else {
		resp = "Numero entero no existe en la lista. Intente de nuevo.";
	}
	return resp;
}
string Gestor::buscarElementoListaCircularDoblementeEnlazada(const int pDato) {
	int pos = listaCircularDoblementeEnlazada.buscarElemento(pDato);
	string msg;
	if (pos == -1) {
		msg = "El dato " + to_string(pDato) + " no se encuentra en la lista.";
	}
	else {
		msg += "El dato " + to_string(pDato) + " si se encuentra en la lista en la posicion " + to_string(pos) + "\n";
	}
	return msg;
}
string Gestor::verificarListaVaciaCircularDoblementeEnlazada() {
	bool cond = listaCircularDoblementeEnlazada.verificarListaVacia();
	string msg;
	if (cond) {
		msg = "La lista se encuentra vacia.";
	}
	else {
		msg = "La lista no se encuentra vacia.";
	}
	return msg;
}
int Gestor::mostrarLargoListaCircularDoblementeEnlazada() {
	int largo;
	largo = listaCircular.getLargo();
	return largo;
}

// Bicola
void Gestor::agregarAlfrente(int num) {
	bicola.agregarAlfrente(num);
}
void Gestor::agregarAlfinal(int num) {
	bicola.agregarAlfinal(num);
}
int Gestor::removerAlfrente() {
	return bicola.removerAlfrente();
}
int Gestor::removerAlfinal() {
	return bicola.removerAlfinal();
}
string Gestor::esVacio() {
	if (bicola.esVacia()) {
		return "Lo sentimos, la lista se encuentra vacia";
	}
	else {
		return "La si lista contiene elementos";
	}
}
int Gestor::longitud() {
	return bicola.getCant();
}