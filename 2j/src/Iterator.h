/*
 * Iterator.h
 *
 *  Created on: 6 nov. 2024
 *      Author: Alumno
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_

#include "Fila.h"
#include <iostream>
using namespace std;

template <class T>
class Iterator{
private:
	const Fila<T>& fila;
	Nodo<T> * actual;

public:
	Iterator(const Fila<T>& f): fila(f), actual(f.frente){}

	bool hayMasElementos()
	{
		return actual != NULL;
	}

	void avanzar()
	{
		actual = actual->getSiguiente();
	}

	T getActual()
	{
		return actual->getDato();
	}
};



#endif /* ITERATOR_H_ */
