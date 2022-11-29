#include "arbol.h"


int main(int argc, char** argv) {
	arbol prueba;
	prueba.leer("datosProductos.txt");
	pila x;
	cola y;
	lista z;
	prueba.asignarInorden(x);
	prueba.asignarPreorden(y);
	prueba.asignarPostorden(z);
	cout<<"Datos de la PILA inorden"<<endl;
	x.mostrar();
	cout<<"Datos de la COLA preorden"<<endl;
	y.mostrar();
	cout<<"Datos de la LISTA postorden"<<endl;
	z.mostrar();
	return 0;
}

