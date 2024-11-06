/*
 * Iterator.h
 *
 *  Created on: 6 nov. 2024
 *      Author: Alumno
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_

#include "Fila.h"

class Iterator{
private:
	const Fila& fila;
	Nodo * actual;

public:
	Iterator(const Fila& f): fila(f), actual(f.frente){}

	bool hayMasElementos()
	{
		return actual != NULL;
	}

	void avanzar()
	{
		actual = actual->getSiguiente();
	}

	item getActual()
	{
		return actual->getDato();
	}
};



#endif /* ITERATOR_H_ */
