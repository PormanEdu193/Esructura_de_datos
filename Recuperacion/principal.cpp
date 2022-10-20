#include "producto.h"

//Programa presentado por NOMBRE DEL ESTUDIANTE

void mostrar(producto [][2] );
void leer(producto [][2],string);

int main()
{
   producto estante [5][2];
   mostrar(estante);
   leer(estante, "datosProductos.txt");
   mostrar(estante);
   return 0;
}

void mostrar(producto a[][2]){
	for(int i=0;i<5;i++){
		for(int j=0;j<2;j++){
			cout<<"Producto: "<<a[i][j].getNombre()<<" ,Precio: ";
			cout<<a[i][j].getPrecio()<<endl;
		}
	}
	cout<<"\n";
}

void leer(producto b[][2], string a){
	ifstream entrada(a.c_str());
	int i=0,j=0;
	string n;
	int p;
	while(!entrada.eof()&&i<5){
		entrada>>n>>p;
		if(j<2){
		  if(p>=1000){
		  	b[i][j].setPrecio(p);
		    b[i][j].setNombre(n);
		    j++;	
		  }  
		}
		else{
		  i++;
		  j=0;	
		}
		 
		 	
	}
}


