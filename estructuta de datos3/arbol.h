#ifndef ARBOL_H
#define ARBOL_H
#include "nodoArbol.h"
#include "lista.h"
#include "cola.h"
#include "pila.h"
using std::string;

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
		void insertar(producto);
		void ayudaInsertar(producto ,nodoArbol* &);
		void inOrden();
		void mostrarInOrden(nodoArbol *);
		nodoArbol*& tres();
		void leer(string);
		void asignarInorden(pila&);
		void ayudaAsignarInorden(pila & , nodoArbol *);
		void asignarPreorden(cola &);
		void ayudaPreorden(cola & , nodoArbol * );
		void asignarPostorden(lista & );
		void ayudaPostorden(lista & , nodoArbol * );
		void ayudaInorden(pila & , nodoArbol * );
	protected:
};

#endif
