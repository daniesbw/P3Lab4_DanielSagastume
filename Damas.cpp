#include "Damas.h"
#include "Damas.h"

#include<iostream>
using namespace std;
Damas::Damas()
{
}
 

Damas::~Damas()
{
	freeMatrix();
	cout<<"Liberado memoria"<<endl;
}


void Damas::freeMatrix(){
    if(matrix!=NULL){
        for(int i = 0; i< 8;i++){
            delete[] matrix[i];
        }
        
        delete[] matrix;
        
        matrix=NULL;
    }
}