#include "producto.h"

producto::producto()
{
	setNombre("Vacio");
	setPrecio(0);
}

producto::~producto()
{
	;
}

void producto::setNombre(string nom){
	nombre=nom;
}

void producto::setPrecio(int pre){
	precio=pre;
}

int producto::getPrecio(){
	return precio;
}

string producto::getNombre(){
	return nombre;
}
