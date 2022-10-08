#ifndef NODO_H
#define NODO_H
#include <iostream>
using std::cout;
using std::endl;
struct nodo
{
	private:
		int dato;
		nodo * siguientePtr;
	public:
		nodo();
		nodo(int);
		~nodo();
		void setDato(int);
		void setSiguientePtr(nodo *);
		int getDato();
		nodo * getSiguientePtr();
		void imprimir();
	protected:
};

#endif
