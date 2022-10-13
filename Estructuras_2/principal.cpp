#include "lista.h"

int main(int argc, char** argv) {
	nodo x;
	x.imprimir();
	lista y;
	y.imprimir();
	y.insertarFinal(45);
	y.imprimir();
	y.insertarFinal(86);
	y.imprimir();
	y.insertarFinal(31);
	y.imprimir();
	y.mostrar();
	return 0;
}
