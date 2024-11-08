/*
 * Fila.h
 *
 *  Created on: 4 oct 2024
 *      Author: P0L0
 */

#ifndef FILA_H_
#define FILA_H_

typedef int item;
#define INDEF 999;
#include "Nodo.h"

template<class T> // esto es como hacer un include
class Iterator;

template<class T>
class Fila {
private:
    Nodo<T> * frente;
    Nodo<T>* final;
    int longitud;

public:
    Fila() : frente(NULL), final(NULL), longitud(0) {}

    bool EsFilaVacia() {
    	return frente == NULL;
    }

    T Frente() {
    	return (!EsFilaVacia()) ? frente->getDato() : INDEF;
    }

    void Defila() {
    	if (!EsFilaVacia()) {
    		Nodo<T> * temp = frente;
    		frente = frente->getSiguiente();
    		delete temp;
    		longitud--;

    		if (frente == NULL) {
    			final = NULL;
    		}
    	}
    }

    void Enfila(T valor) {
    	Nodo<T> * nuevoNodo = new Nodo<T>(valor);
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

    bool Pertenece(T valor) {
    	Nodo<T>* temp = frente;
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
    		Nodo<T>* actual = frente;
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
    		Nodo<T> * aux = frente;
    		frente = frente->getSiguiente();
    		delete aux;
    	}
    }

    friend class Iterator<T>;

};


#endif /* FILA_H_ */
