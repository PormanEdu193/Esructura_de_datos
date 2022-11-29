#include "arbol.h"

arbol::arbol()
{
	setRaizPtr(0);
}

arbol::~arbol()
{
	;
}

nodoArbol* arbol::getRaizPtr(){
    return raizPtr;	
}
void arbol::setRaizPtr(nodoArbol* a){
	raizPtr=a;
}
void arbol::imprimir(){
	cout<<"La raiz apunta a:"<<getRaizPtr()<<endl;
}

nodoArbol*& arbol::tres(){
	return raizPtr;
}

void arbol::insertar(producto i){
	ayudaInsertar(i,tres());
}

void arbol::ayudaInsertar(producto a,nodoArbol*& raizLocal){
	if(raizLocal==0){
		nodoArbol* temp= new nodoArbol(a);
		raizLocal = temp;
		cout<<"Dato insertado "<<a.getPrecio()<<endl;
	}
	else{
		if(a.getPrecio()<raizLocal->getValor().getPrecio()){
			cout<<"Dato insertado por la izquierda "<<a.getPrecio()<<endl;
			ayudaInsertar(a,raizLocal->uno());	
		}
		else{
			if(a.getPrecio()>raizLocal->getValor().getPrecio()){
				cout<<"Dato insertado por la derecha "<<a.getPrecio()<<endl;
				ayudaInsertar(a,raizLocal->dos());
			}
			else{
			 	cout<<"Dato duplicado "<<a.getPrecio()<<endl;
			}		
		}
	}
}

void arbol::inOrden(){
	mostrarInOrden(getRaizPtr());
}

void arbol::mostrarInOrden(nodoArbol* raizLocal){
	if(raizLocal!=0){
		mostrarInOrden(raizLocal->getIzPtr());
		cout<<raizLocal->getValor().getNombre()<<endl;
		mostrarInOrden(raizLocal->getDePtr());
	}
}

void arbol::leer(string a){
	ifstream archivo;
	string n;
	int pre;
	producto p;
	archivo.open(a.c_str(),ios::in);
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo";
		exit(1);
	}
	else{
		while(!archivo.eof()){
		    archivo>>n>>pre;
			p.setNombre(n);
			p.setPrecio(pre);
		    insertar(p);
		}
	}
	
	cout<<"Datos ingresados"<<endl;
}

void arbol::asignarInorden(pila & x){
	ayudaInorden(x, getRaizPtr());
}
void arbol::ayudaInorden(pila & x, nodoArbol * raizLocal){
	if( raizLocal != 0) {
		ayudaInorden(x, raizLocal->getIzPtr());	
		x.insertar(raizLocal->getValor());
		ayudaInorden(x,raizLocal->getDePtr());	
	}
}
void arbol::ayudaAsignarInorden(pila & x, nodoArbol * raizLocal){
	if( raizLocal != 0) {
		ayudaInorden(x, raizLocal->getIzPtr());	
		x.insertar(raizLocal->getValor());
		ayudaInorden(x,raizLocal->getDePtr());	
	}
}

void arbol::asignarPreorden(cola & x){
	ayudaPreorden(x, getRaizPtr());
}

void arbol::ayudaPreorden(cola & x, nodoArbol * raizLocal){
	if( raizLocal != 0) {
		x.insertar(raizLocal->getValor());
		ayudaPreorden(x, raizLocal->getIzPtr());
		ayudaPreorden(x,raizLocal->getDePtr());	
	}
}

void arbol::asignarPostorden(lista & x){
	ayudaPostorden(x, getRaizPtr());
}

void arbol::ayudaPostorden(lista & x, nodoArbol * raizLocal){
	if( raizLocal != 0) {
		ayudaPostorden(x, raizLocal->getIzPtr());
		ayudaPostorden(x,raizLocal->getDePtr());
		x.insertarFinal(raizLocal->getValor());	
	}
}
