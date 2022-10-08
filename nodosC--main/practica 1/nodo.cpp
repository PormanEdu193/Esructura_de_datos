#include "nodo.h"

nodo::nodo(int e)
{
	setDato(e);
	setSiguientePtr(0);
}

nodo::~nodo()
{
	;
}

void nodo::setDato(int d){
	dato=d;
}

void nodo::setSiguientePtr(nodo * s){
	siguientePtr = s;
}

int nodo::getDato(){
	return dato;
}

nodo * nodo::getSiguientePtr(){
	return siguientePtr;
}

void nodo::imprimir(){
	cout<<"El dato del nodo es: "<<getDato()<<endl;
	cout<<"El nodo apunta a: "<<getSiguientePtr()<<endl;
}
