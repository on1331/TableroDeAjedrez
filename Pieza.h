#pragma once
#include <iostream>
using namespace std;
class Pieza
{
private:
	short fila;
	short columna;
public:
	Pieza() {
		fila = 1;
		columna = 1;
	}
	Pieza(short f, short c) {
		if (esCeldaValida(f, c)) {
			fila = f;
			columna = c;
		}
		else {
			fila = 1;
			columna = 1;
		}
	}
	void verInfo() {
		cout << "Fila: " << fila << endl;
		cout << "Columna: " << columna << endl;
	}

	bool esCeldaValida(short f, short c) {
		if (f < 1 || f > 8 || c < 1 || c>8)
			return false;
		else
			return true;
	}

	//completar stters y getters
	void setFila(short f) {
		fila = f;
	}
	void setColumna(short c) {
		columna = c;
	}
	short getFila() {
		return fila;
	}
	short getColumna() {
		return columna;
	}
};

