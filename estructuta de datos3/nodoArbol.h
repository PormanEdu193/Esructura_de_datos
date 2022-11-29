#ifndef NODOARBOL_H
#define NODOARBOL_H
#include "producto.h"


class nodoArbol
{
	private:
		
		producto valor;
		nodoArbol* izPtr;
		nodoArbol* dePtr;
	public:
		nodoArbol();
		nodoArbol(producto);
		~nodoArbol();
		void setValor(producto);
		void setIzPtr(nodoArbol*);
		void setDePtr(nodoArbol*);
		producto getValor();
		nodoArbol* getIzPtr();
		nodoArbol* getDePtr();
		void imprimir();
		nodoArbol*& uno();
		nodoArbol*& dos();
	protected:
};

#endif
