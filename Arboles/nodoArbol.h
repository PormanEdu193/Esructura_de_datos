#ifndef NODOARBOL_H
#define NODOARBOL_H
#include "persona.h"
#include <iostream>
using std::cout;
using std::endl;

class nodoArbol
{
	private:
		
		persona persona1;
		nodoArbol* izPtr;
		nodoArbol* dePtr;
	public:
		nodoArbol();
		nodoArbol(persona);
		~nodoArbol();
		void setPersona1(persona);
		void setIzPtr(nodoArbol*);
		void setDePtr(nodoArbol*);
		persona getPersona1();
		nodoArbol* getIzPtr();
		nodoArbol* getDePtr();
		void imprimir();
		nodoArbol*& uno();
		nodoArbol*& dos();
	protected:
};

#endif
