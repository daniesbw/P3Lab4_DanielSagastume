#ifndef CASILLA_H
#define CASILLA_H
#include "Pieza.h"
using std::string;
class Casilla {
	private:
		Pieza* pieza;

	public:
		Casilla();
		Casilla(Pieza*);
		void setCasilla();
		Pieza getPieza();
		string toString();
		//~Casilla();
	protected:
};

#endif