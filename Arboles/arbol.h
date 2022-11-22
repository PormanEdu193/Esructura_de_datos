#ifndef ARBOL_H
#define ARBOL_H
#include "nodoArbol.h"

class arbol
{
	private:
		nodoArbol* raizPtr;
	public:
		arbol();
		~arbol();
		nodoArbol* getRaizPtr();
		void setRaizPtr(nodoArbol*);
		void imprimir();
		void insertar(persona);
		void ayudaInsertar(int ,nodoArbol* &);
		void inOrden();
		void mostrarInOrden(nodoArbol *);
		nodoArbol*& tres();
	protected:
};

#endif
