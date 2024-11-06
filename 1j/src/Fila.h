/*
 * Fila.h
 *
 *  Created on: 4 oct 2024
 *      Author: P0L0
 */

#ifndef FILA_H_
#define FILA_H_

typedef int item;
#define INDEF 9999
#include "Nodo.h"

class Fila {
private:
    Nodo* frente;
    Nodo* final;
    int longitud;

public:
    Fila() : frente(NULL), final(NULL), longitud(0) {}

    bool EsFilaVacia() {
    	return frente == NULL;
    }

    item Frente() {
    	return (!EsFilaVacia()) ? frente->getDato() : INDEF;
    }

    void Defila() {
    	if (!EsFilaVacia()) {
    		Nodo* temp = frente;
    		frente = frente->getSiguiente();
    		delete temp;
    		longitud--;

    		if (frente == NULL) {
    			final = NULL;
    		}
    	}
    }

    void Enfila(int valor) {
    	Nodo* nuevoNodo = new Nodo(valor);
    	if (EsFilaVacia()) {
    		frente = nuevoNodo;
    		final = nuevoNodo;
    	} else {
    		final->setSiguiente(nuevoNodo);
    		final = nuevoNodo;
    	}
    	longitud++;
    }

    int Longitud() {
    	return longitud;
    }

    bool Pertenece(int valor) {
    	Nodo* temp = frente;
    	while (temp != NULL) {
    		if (temp->getDato() == valor) {
    			return true;
    		}
    		temp = temp->getSiguiente();
    	}
    	return false;
    }

    void Mostrar() {
    	if (EsFilaVacia()) {
    		std::cout << "La fila está vacía." << std::endl;
    	} else {
    		Nodo* actual = frente;
    		while (actual != NULL) {
    			std::cout << actual->getDato() << " ";
    			actual = actual->getSiguiente();
    		}
    		std::cout << std::endl;
    	}
    }

    ~Fila()
    {
    	for(int i = 0; i < this->longitud; i++)
    	{
    		Nodo * aux = frente;
    		frente = frente->getSiguiente();
    		delete aux;
    	}
    }

    friend class Iterator;

};


#endif /* FILA_H_ */
