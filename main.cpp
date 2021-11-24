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
int c = 0;

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

	v.add(0, 1);
	v.add(1, 1);

	cout << fibonacci(n) << endl;

	cout << "Accesos de Fibonacci: " << c << endl;

	return 0;
}

long fibonacci(int n) {
	c++;
	if (n < 2) {

		v.get(n-1);
	}
	else {

		if (n <= v.currentSize() && v.get(n) < 0) {
			long m = v.get(n - 1) + v.get(n - 2);
			v.add(n, m);
			return m;
		}
		else if (v.get(n - 1) > 0 && v.get(n - 2) > 0) return v.get(n - 1) + v.get(n - 2);
		else return fibonacci(n - 1) + fibonacci(n - 2);
	}
}