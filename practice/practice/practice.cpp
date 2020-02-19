#include <iostream>
#include <cstdlib>
using std::cin; using std::cout; using std::endl;

// passing pointer by value
void funcVal(int *p) {
	*p = 22;
	p = new int(33);
}

// passing pointer by reference
void funcRef(int *& p) {
	*p = 44;
	p = new int(55);
}

// passing pointer to pointer, superseded by above: seldom used
void funcRefRef(int **pp) {
	**pp = 66;
	*pp = new int(77);
}

// returning pointer
int *funcRet() {
	int *tmp = new int(88);
	return tmp;
}