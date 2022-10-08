#include <string.h>//metodos para manejo de string
#include <string>
#include <sstream> //metodos de comverción
#include <iostream>
using std::cout;
using std::endl;
using std::string;
#include<fstream> //manejo de archivos
using std::ifstream;
using std::ios;
#include "producto.h"

//Programa presentado por Andrés Felipe Calderón Mancera

void mostrar(producto a[][2]);
void promedio(producto b[][2]);
void leer(producto c[][2]);

int main(int argc, char** argv) {
	string f;
	producto estante [5][2];
    mostrar(estante);
    promedio(estante);
    leer(estante);
    mostrar(estante);
    promedio(estante);    
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

void promedio(producto b[][2]){
	int sumaPro,promedio,count=0;
	
	for(int i=0;i<5;i>2,i++){
		for(int j=0;j<2;j++){
			sumaPro= sumaPro + b[i][j].getPrecio();
			count++;
		}
	}
	promedio=sumaPro/count;
	cout<<"El promedio es: "<<promedio<<endl;
	cout<<"\n";
}

void leer(producto c[][2]){
	 ifstream archivo;
	 string texto,nombre,precioStr;
	 int espacio,aux,fi=0,co=0,precio,flag=0;
	 
	 archivo.open("datosProductos.txt",ios::in);
	 if(archivo.fail()){
	 	cout<<"No se puede abrir el archivo"<<endl;
	 	exit(1);
	 }
	 while(!archivo.eof()){ //mientras no sea el final del archivo
	 	getline(archivo,texto);
	 	
	 	for(int i=0;i<strlen(texto.c_str());i++){
	 		if(texto[i]==9&&flag==0){ //verificando tab horizontal, si se quire con espacios cambiar la condición a 32
	 			espacio=i;
	 			flag=1;
	 		}
	 		else if(flag==1){
	 			aux=espacio;
	 			nombre = texto.substr(0,espacio);
	 			while(texto[aux]==9)aux++;
	 			precioStr=texto.substr(aux,strlen(texto.c_str())-espacio);
	 			std::istringstream(precioStr)>>precio;
	 			if(fi<5){
	 				c[fi][co].setNombre(nombre);
	 				c[fi][co].setPrecio(precio);
	 				co++;
				     if(co>=2){
				     	co=0;
				     	fi++;
					 } 
			     }
	 			flag=0;
			 }
		 }
	 	
	 }
	 archivo.close();
}
