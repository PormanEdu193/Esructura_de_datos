#include "nodoArbol.h"

int main(int argc, char** argv) {
	nodoArbol x;
	nodoArbol* temp1 = new nodoArbol();
	nodoArbol* temp2 = new nodoArbol();
	x.setIzPtr(temp1);
	x.setDePtr(temp2);
	x.imprimir();
	return 0;
}
