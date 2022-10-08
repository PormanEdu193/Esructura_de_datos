#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

template <class M>
void leer(M []);
template <class T_3>
void mostrar(T_3 []);


int main(int argc, char** argv) {
	string nombre[3];
	double sueldo[3];
	
	cout<<"Digite Nombres"<<endl;
	leer(nombre);
	cout<<"Nombres"<<endl;
	mostrar(nombre);
	
	cout<<"Digite sueldos"<<endl;
	leer(sueldo);
	cout<<"Sueldos"<<endl;
	mostrar(sueldo);
	return 0;
}

template <class T>
void leer(T a[]){	
	for(int i=0;i<3;i++){
	   cout<<"Digite dato"<<endl;
	   cin>>a[i];
	}
}

template <class T_2>
void mostrar(T_2 b[]){
	cout<<"Mostrando datos"<<endl;
	for (int i=0;i<3;i++){
		cout<<b[i]<<endl;
	}
}



