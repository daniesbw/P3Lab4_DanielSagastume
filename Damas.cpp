#include "Damas.h"
#include "Damas.h"

#include<iostream>

using std::string;
using namespace std;

Damas::Damas() {
	matrix=NULL;
}

void Damas::preparar() {
	int bandera=0;
	int Piezas=0;//Variable para saber si esta imprimiendo las fichas de J! o J2
	matrix = new Casilla**[8];
	for(int y=0; y<8; y++) {
		for(int x=0; x<8; x++) {
			matrix[y] = new Casilla*[8];
		}
	}
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if(i<3) { //Primer jugador
				if(i==0||i==2) {
					if(j%2==0) {
						Pieza* pieza= NULL;
						pieza=new Pieza(true, false);
						Casilla* casilla=NULL;
						casilla=new Casilla(pieza);
						matrix[i][j]=casilla;
					}
				} else if(i==1) {
					if(j%2==1) {
						Pieza* pieza= NULL;
						pieza=new Pieza(true, false);
						Casilla* casilla=NULL;
						casilla=new Casilla(pieza);
						matrix[i][j]=casilla;
					}
				}
			} else if(i>=5) {
				if(i==5||i==7) {
					if(j%2==1) {
						Pieza* pieza= NULL;
						pieza=new Pieza(false, false);
						Casilla* casilla=NULL;
						casilla=new Casilla(pieza);
						matrix[i][j]=casilla;
					}
				} else if(i==6) {
					if(j%2==0) {
						Pieza* pieza= NULL;
						pieza=new Pieza(false, false);
						Casilla* casilla=NULL;
						casilla=new Casilla(pieza);
						matrix[i][j]=casilla;
					}
				}
			}
		}
	}
	matrix[0][1]= NULL;//Me ponia un cero y no sabia que hacer xd
}

void Damas::imprimir() {
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if(matrix[i][j]!=NULL) {
				cout<<matrix[i][j]->toString();
			} else {
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}

void Damas::jugar() {
	int turno=0;
	while(gano()==false) {
		if(turno==0) {
			int x=0,y=0,objX=0,objY=0;
			imprimir();
			cout<<"Ingrese la coordenada x de la pieza: ";
			cin>>x;
			cout<<"Ingrese la coordenada y de la pieza: ";
			cin>>y;
			cout<<"Ingrese la coordenada x de la casilla donde va a mover: ";
			cin>>objX;
			cout<<"Ingrese la coordenada y de la casilla donde va a mover: ";
			cin>>objX;
			bool valid=movement(x,y,objX,objY, turno);
			if(valid==true){
				cout<<"Movimiento valido"<<endl;
			}else{
				cout<<"Movimiento no valido"<<endl;
			}
			turno=1;

		} else {
			int x=0,y=0,objX=0,objY=0;
			imprimir();
			cout<<"Ingrese la coordenada x de la pieza: ";
			cin>>x;
			cout<<"Ingrese la coordenada y de la pieza: ";
			cin>>y;
			cout<<"Ingrese la coordenada x de la casilla donde va a mover: ";
			cin>>objX;
			cout<<"Ingrese la coordenada y de la casilla donde va a mover: ";
			cin>>objX;
			bool valid=movement(x,y,objX,objY, turno);
			if(valid==true){
				cout<<"Movimiento valido"<<endl;
			}else{
				cout<<"Movimiento no valido"<<endl;
			}
			turno=0;
		}
	}
}

bool Damas::movement(int x, int y, int objX, int objY, int turno) {
	bool valido=false;
	if(matrix[objY][objX]==NULL) {
		if(objX-x==1||objX-x==-1||objY-y==1||objY-y==-1){
			valido=true;	
		}	
	}
	return valido;
}


bool Damas::gano() {
	bool win=false;
	int O=0;

	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if(matrix[i][j]!=NULL) {
				O++;
			}
		}
	}

	if(O<=12) {
		win=true;
	}
	return win;
}


Damas::~Damas() {
	freeMatrix();
	cout<<"Liberado memoria"<<endl;
}


void Damas::freeMatrix() {
	if(matrix!=NULL) {
		for(int i = 0; i< 8; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
		matrix=NULL;
	}
}