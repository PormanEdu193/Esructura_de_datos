#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <fstream>
using std::ifstream;

class lista
{
	private:
		nodo* primerPtr;
		nodo* ultimoPtr;
	public:
		lista();
		~lista();
		void setPrimerPtr(nodo*);
		void setUltimoPtr(nodo*);
		nodo* getPrimerPtr();
		nodo* getUltimoPtr();
		void imprimir();
		void insertarFinal(int);
		void mostrar();
		void leer();
	protected:
};

#endif
