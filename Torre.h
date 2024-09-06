#pragma once
#include <iostream>
#include "Pieza.h"
using namespace std;
class Torre : public Pieza
{
public:
	short numCuadros;
	Torre(short f, short c, short numC) : Pieza(f, c) {
		numCuadros = numC;
	}
};

