#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using std::string;

//Programa presentado por Andrés Felipe Calderón Mancera
class producto
{
	private:
		string nombre;
		int precio;
	public:
		producto();
		~producto();
		void setNombre(string);
		void setPrecio(int);
		string getNombre();
		int getPrecio();
	protected:
};

#endif
