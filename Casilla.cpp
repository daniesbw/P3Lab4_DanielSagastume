#include "Casilla.h"

Casilla::Casilla() {
	pieza = new Pieza();
}


Casilla::Casilla(Pieza* pieza) {
	this->pieza=pieza;
}

string Casilla::toString() {
	if(pieza->getPieza()==true||pieza->getPieza()==false&&pieza->getReina()==false) {
		return pieza->toStringp();
	} else if(pieza->getReina()==true) { //Si es una reina
		return pieza->toStringr();
	} else {
		return " ";
	}
}
/*
Casilla::~Casilla()
{
}*/