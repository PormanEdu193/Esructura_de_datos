#include <iostream>
#include "nodo.h"
using std::cout;
using std::endl;

int main(int argc, char** argv) {
	nodo x(86);
	nodo * y=new nodo(45);
	x.setSiguientePtr(y);
	x.imprimir();
	nodo * z = new nodo(31);
	y->setSiguientePtr(z);
	y->imprimir();
	cout<<&x<<endl;
	
	
	return 0;
}
