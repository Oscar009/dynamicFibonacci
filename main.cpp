/*
AUTOR: Oscar Noe Ortiz Barba
CURSO: Diseño y análisis de algoritmos
PROGRAMA: Fibonacci con programación dinámica
FECHA: 23/11/2021
*/

#include <iostream>
#include "vector.h"

long fibonacci(int);

using namespace std;

vector v(1);
int main() {

	int n;

	cout << "#:";
	cin >> n;

	try {
		if (n < 1) throw(n);
	}
	catch(int num){
		cout << "Try with number > 0" << endl;
	}

	cout << fibonacci(n);

	v->printPile();

	return 0;
}

long fibonacci(int n) {
	if (n < 2) {
		v.add(n, 1);
		return 1;
	} else {
		//if (v->get(n - 1) != 0 && v->get(n - 2) != 0) return v->get(n - 1) && v->get(n - 2);
		long value = fibonacci(n - 1) + fibonacci(n - 2);
		v.add(n, value);
		return value;
	}
}