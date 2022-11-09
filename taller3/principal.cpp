//Programa presentado por Andrés Felipe Calderón Mancera-20211673042
#include "lista.h"

void menu(lista x);

int main() {
	lista mercado;
	menu(mercado);
	return 0;
} 

void menu(lista x){
	int opcion=0,precio;
	string nombre;
	producto a;
	cout<<"1. Leer los datos\n2. Mostrar los datos\n3. Insertar al inicio\n4. Insertar al final\n5. Eliminar del inicio\n6. Eliminar del final\n7. Guardar los datos\n8. Salir\n";
	cout<<"Ingrese opcion: ";
	cin>>opcion;
	cout<<endl;
	switch(opcion){
		case 1:
			x.leer();
			cout<<endl;
			menu(x);
			break;
		case 2:
			x.mostrar();
			cout<<endl;
			menu(x);
			break;
		case 3:
			cout<<"Ingrese producto: ";
			cin>>nombre;
			cout<<"Ingrese precio: ";
			cin>>precio;
			a.setNombre(nombre);
			a.setPrecio(precio);
			x.insertarComienzo(a);
			cout<<endl;
			menu(x);
			break;	
		case 4:
			cout<<"Ingrese producto: ";
			cin>>nombre;
			cout<<"Ingrese precio: ";
			cin>>precio;
			a.setNombre(nombre);
			a.setPrecio(precio);
			x.insertarFinal(a);
			cout<<endl;
			menu(x);
			break;
		case 5:
			x.eliminarInicio();
			cout<<endl;
			menu(x);
			break;
		case 6:
			x.eliminarFinal();
			cout<<endl;
			menu(x);
			break;
		case 7:
			x.guardar();
			cout<<endl;
			menu(x);
			break;
		case 8:
			cout<<"Hasta la proxima"<<endl;
			exit(1);
	}
}
