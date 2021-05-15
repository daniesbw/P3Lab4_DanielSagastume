

/* Laboratorio 4 Programacion 3 Daniel Sagastume */

#include <iostream>
#include "Damas.h"
int main(int argc, char** argv) {
	Damas* damas=NULL;
	damas=new Damas();
	damas->preparar();
	damas->jugar();
	delete damas;
	damas=NULL;
	return 0;
}