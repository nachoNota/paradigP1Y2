/*
 * Nodo.h
 *
 *  Created on: 6 nov. 2024
 *      Author: Alumno
 */

#ifndef NODO_H_
#define NODO_H_


template <class T>
class Nodo {
	T dato;
	Nodo *sig;
public:
	Nodo(T d, Nodo*s=nullptr):dato(d),sig(s){};

	T getDato(){ return dato;};

	Nodo* getSiguiente(){return sig;};

	void setDato(T d){dato=d;};

	void setSiguiente(Nodo* s){sig=s;};

	virtual ~Nodo(){};
};


#endif /* NODO_H_ */
