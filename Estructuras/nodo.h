#ifndef NODO_H
#define NODO_H

#include <iostream>
using std::cout;
using std::endl;

class nodo
{
	private:
		int valor;
		nodo* siguientePtr;
	public:
		nodo();
		nodo(int);
		~nodo();
		void setValor(int);
		void setSiguientePtr(nodo *);
		int getValor();
		nodo* getSiguientePtr();
		void imprimir();
	protected:
};

#endif
