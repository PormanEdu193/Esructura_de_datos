#include <iostream>
#include "CArro.h"
using std::cout;
using std::endl;


int main(int argc, char** argv) {
	CArro x[3];
	for(int i=0;i<3;i++){
		x[i].imprimir();
	}
	return 0;
}
