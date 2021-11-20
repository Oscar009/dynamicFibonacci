#ifndef vector_h
#define vector_h

#include <iostream>

class vector
{
	int c;//capacidad 
	int s;//tamaño real
	long* data;

public:
	vector(int);
	~vector();

	void add(int, long);
	long get(int);

	bool isEmpty();
	int currentSize();
	int currentCapacity();
	void printPile();
};
#endif