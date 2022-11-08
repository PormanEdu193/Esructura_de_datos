#include "lista.h"
void menu(lista x);

int main(int argc, char** argv) {
	lista mercado;
    menu(mercado);
    return 0;
}

void menu(lista x){
	int opcion;
	cout<<" 1. Leer los datos \n 2. Mostrar los datos \n 3. Insertar al inicio \n 4. Insertar al final \n 5. Eliminar del inicio \n 6. Eliminar del final \n 7. Guardar los datos \n 8. Salir";
	cin>>opcion;
	switch(opcion){
		case 1:
			x.leer();
			break;
		case 2:
			x.mostrar();
			break;
		case 3:
			producto a;
			string nombre;
			int precio;
			cout<<"Ingrese producto";
			cin>>nombre;
			cout<<"Ingrese precio";
			cin>>precio;
			a.setPrecio(precio);
			a.setNombre(nombre);
			x.insertarComienzo(a);
			break;
		case 4:
			producto a;
			string nombre;
			int precio;
			cout<<"Ingrese producto";
			cin>>nombre;
			cout<<"Ingrese precio";
			cin>>precio;
			a.setPrecio(precio);
			a.setNombre(nombre);
			x.insertarFinal(a);
			break;
		case 5:
			x.eliminarInicio();
			break;
		case 6:
			x.eliminarFinal();
			break;
	}
}
