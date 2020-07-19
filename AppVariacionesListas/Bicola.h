#pragma once
#ifndef AppVariacionesListas
#define AppVariacionesListas
#include <iostream>
#include "Nodo.h"
class Bicola
{
public:
	int cant;
	Nodo* nodoFirst;
	Nodo* nodoLast;
public:
	Bicola();

	void setCant(int);
	int getCant();
	void setNodoFirst(Nodo*);
	Nodo* getNodoFirst();
	void setNodoLast(Nodo*);
	Nodo* getNodoLast();


	void agregarAlfrente(int);
	void agregarAlfinal(int);
	int removerAlfrente();
	int removerAlfinal();
	bool esVacia();

};

#endif