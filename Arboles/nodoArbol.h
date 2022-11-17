#ifndef NODOARBOL_H
#define NODOARBOL_H
#include <iostream>
using std::cout;
using std::endl;

class nodoArbol
{
	private:
		
		int valor;
	public:
		nodoArbol* izPtr;
		nodoArbol* dePtr;
		nodoArbol();
		nodoArbol(int);
		~nodoArbol();
		void setValor(int);
		void setIzPtr(nodoArbol*);
		void setDePtr(nodoArbol*);
		int getValor();
		nodoArbol* getIzPtr();
		nodoArbol* getDePtr();
		void imprimir();
	protected:
};

#endif
