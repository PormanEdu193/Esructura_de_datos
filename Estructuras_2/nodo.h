#ifndef NODO_H
#define NODO_H

#include <iostream>
using std::cout;
using std::endl;

class nodo
{
	private:
		producto valor;
		nodo* siguientePtr;
	public:
		nodo();
		nodo(producto);
		~nodo();
		void setValor(producto);
		void setSiguientePtr(nodo *);
		int getValor();
		nodo* getSiguientePtr();
		void imprimir();
	protected:
};

#endif
