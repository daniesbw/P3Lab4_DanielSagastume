#ifndef DAMAS_H
#define DAMAS_H
#include "Casilla.h"

class Damas {
	private:
		Casilla*** matrix;
	public:
		Damas();
		void preparar();
		void imprimir();
		bool gano();
		bool movement(int, int, int, int);
		bool capturar(int, int, int, int);
		void jugar();
		void freeMatrix();
		~Damas();
	protected:
};

#endif