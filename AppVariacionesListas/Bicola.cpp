#include "Bicola.h"
#include "Nodo.h"

Bicola::Bicola() {}// Constructor por defecto

Nodo* Bicola::getNodoFirst() { return nodoFirst; }

void Bicola::setNodoFirst(Nodo* _first) { Bicola::nodoFirst = _first; }

Nodo* Bicola::getNodoLast() { return nodoLast; }

void Bicola::setNodoLast(Nodo* _last) { Bicola::nodoLast = _last; }

void Bicola::setCant(int pcant) { cant = pcant; }//SetCant

int Bicola::getCant() { return cant; }//GetCant

void Bicola::agregarAlfrente(int num) {
	Nodo* new_nodo = new Nodo(num);
	if (this->getNodoFirst() == nullptr) {
		new_nodo->setSig(this->getNodoFirst());
		this->setNodoFirst(new_nodo);
		this->setNodoLast(new_nodo); 
	}
	else {
		new_nodo->setSig(this->getNodoFirst());
		this->setNodoFirst(new_nodo);
	}
	setCant(getCant()+1);
}

void Bicola::agregarAlfinal(int num) {
    Nodo* new_nodo = new Nodo(num);
    
        if (getNodoLast() == nullptr) {
            new_nodo->setSig(this->getNodoLast());
            this->setNodoFirst(new_nodo);
            this->setNodoLast(new_nodo);
        }
        else {
            new_nodo->setSig((this->getNodoLast())->getSig());
            this->setNodoLast(new_nodo);
        }
		setCant(getCant() + 1);
}

bool Bicola::esVacia() {
	return (getNodoFirst() == nullptr) ? true : false;
}

int Bicola::removerAlfinal() {
	int num;

	if (getNodoLast() != nullptr) {
		Nodo* aux = this->getNodoLast();
		num = aux->getInfo();
		setNodoLast(aux->getSig());
		delete aux;
		setCant(getCant() - 1);
	}
	else {
		return -1;
	}
	return num;
}

int Bicola::removerAlfrente() {
	int num;

	if (getNodoFirst() != nullptr) {
		Nodo* aux = this->getNodoFirst();
		num = aux->getInfo();
		setNodoFirst(aux->getSig());
		delete aux;
		setCant(getCant() - 1);
	}
	else {
		return -1;
	}
	return num;
}