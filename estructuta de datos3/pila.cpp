#include "pila.h"

pila::pila()
{
}

pila::~pila()
{
}
void pila::insertar(producto p){
	insertarFinal(p);
}
void pila::eliminar(void){
	eliminarInicio();
}
