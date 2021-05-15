#include "Pieza.h"
#include <string>
using std::string;

Pieza::Pieza() {
	pieza = NULL;
	reina = NULL;
}

Pieza::Pieza(bool pieza, bool reina) {
	this->pieza=pieza;
	this->reina=reina;
}
void Pieza::setReina(bool isReina) {
	reina = isReina;
}

bool Pieza::getReina() {
	return reina;
}

void Pieza::setPieza(bool isPieza) {
	pieza = isPieza;
}

bool Pieza::getPieza() {
	return pieza;
}

string Pieza::toStringp() {
	if(pieza) {
		return "O";
	} else {
		return "X";
	}
}
string Pieza::toStringr() {
	if(reina==true&&pieza==true) {
		return "RO";
	} else {
		return "RX";
	}
}

Pieza::~Pieza() {

}