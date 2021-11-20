#include "vector.h"

vector::vector(int _c) : c(_c), s(0){
	data = new long[_c];
	for (int i = 0; i < c; i++) {
		data[i] = 0;
	}
}

vector::~vector() {
	long* z = nullptr;
	data = z;
	delete[] data;
}

void vector::add(int index, long f) {
	//redimensionamiento
	if (currentCapacity() == currentSize()) {
		vector copy(currentCapacity());
		for (int i = 0; i < currentCapacity(); i++) {
			copy.add(i, get(i));
		}
		data = new long[currentCapacity() * 2];
		c = currentCapacity() * 2;
		s = 0;
		for (int i = 0; i < currentCapacity()/2; i++) {
			data[i] = 0;
			add(i, copy.get(i));
		}
	}
	data[index] = f;
	s++;
}

long vector::get(int i) {
	return data[i];
}

bool vector::isEmpty() { return (s == 0) ? true : false; }

int vector::currentSize() { return s; }

int vector::currentCapacity() { return c; }

void vector::printPile() {
	std::cout << "[ ";
	for (int i = 0; i < c; i++) {
		if (data[i] && i < s) std::cout << "  " << data[i];
		else std::cout << "    ";
	}
	std::cout << " ]\n";
}