#pragma once
#include <iostream>
#include "Pieza.h"
using namespace std;

class Peon : public Pieza
{
public:
	short direccion;
	Peon(short f, short c, short dir) : Pieza(f, c) {
		direccion = dir;

	}
	
	
}; 

