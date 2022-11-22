#include "nodoArbol.h"

nodoArbol::nodoArbol(){
	setIzPtr(0);
	setDePtr(0);
	//setValor(0);
}
nodoArbol::nodoArbol(persona v){
	setIzPtr(0);
	setDePtr(0);
	setPersona1(v);
}
nodoArbol::~nodoArbol(){
	;
}

void nodoArbol::setPersona1(persona v){
	persona1=v;
}
void nodoArbol::setIzPtr(nodoArbol* iz){
	izPtr=iz;
}
void nodoArbol::setDePtr(nodoArbol* de){
	dePtr=de;
}
persona nodoArbol::getPersona1(){
	return persona1;
}
nodoArbol* nodoArbol::getIzPtr(){
	return izPtr;
}
nodoArbol* nodoArbol::getDePtr(){
	return dePtr;
}
void nodoArbol::imprimir(){
	cout<<"Nodo izquierdo = "<<getIzPtr()<<endl;
	cout<<"Nodo derecho = "<<getDePtr()<<endl;
	//cout<<"Persona = "<<getPersona1()<<endl;
}

nodoArbol*& nodoArbol::uno(){
	return izPtr;
}
nodoArbol*& nodoArbol::dos(){
	return dePtr;
}
