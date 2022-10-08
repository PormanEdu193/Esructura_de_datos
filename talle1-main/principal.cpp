#include<iostream>
#include<stdlib.h> //biblioteca estandar
#include<fstream> // manejo de archivos 
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::ofstream;
using std::ios;

template<class T>
void leer(T [][2]);
template<class T_1>
void mostrar(T_1 [][2]);
template<class T_2>
void guardar(T_2[][2],string a);

//Programa presentado por Andrés Felipe Calderón Mancera, 20211673042
int main(int argc, char** argv) {
	int edad [3][2];
    string nombre [3][2];
    float precio [3][2];
    cout<<"Digite nombres"<<endl;
    leer (nombre);
    cout<<"Digite edades"<<endl;
    leer (edad);
    cout<<"Digite precios"<<endl;
    leer (precio);
    cout<<"Mostrando nombres"<<endl;
    mostrar (nombre);
    cout<<"Mostrando edades"<<endl;
    mostrar (edad);
    cout<<"Mostrando precios"<<endl;
    mostrar (precio);
    guardar (nombre,"arregloNombre.txt");
    guardar(edad,"arregloEdad.txt");
    guardar(precio,"arregloPrecio.txt");
	return 0;
}

template <class T>
 void leer(T a[][2]){
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<"Digite dato"<<endl;
			cin>>a[i][j];//llenando arreglo
	   }
	}
}

template<class T_1>
void mostrar(T_1 b[][2]){
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j]<<" ";//mostrando arreglo
        }
        cout<<"\n";
    }
}

template<class T_2>
void guardar(T_2 c[][2],string nombre){
	ofstream archivo;
	archivo.open(nombre.c_str(),ios::out);//creando  o sobrescribiendo archivo
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
	}
	else{
		for(int i=0;i<3;i++){
          for(int j=0;j<2;j++){
            archivo<<c[i][j]<<", ";//llenando archivo
          }
            archivo<<"\n";
         }
    archivo.close();//cerrando archivo
	}
	
}
