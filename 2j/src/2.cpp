//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Fila.h"
#include "Iterator.h"
#include "Fecha.h"

template <class T>
int contarX(Fila<T> f, T item);

int main() {

	Fecha fecha1;
	Fecha fecha2(11, 9, 2021);
	Fecha fecha3;
	Fecha fecha4(25, 4, 2022);
	Fecha fecha5(11, 9, 2021);
	Fecha fecha6(11, 9, 2021);

	Fila<Fecha> F;

	F.Enfila(fecha1);
	F.Enfila(fecha2);
	F.Enfila(fecha3);
	F.Enfila(fecha4);
	F.Enfila(fecha5);

	Iterator<Fecha> it(F);

	int num = contarX<Fecha>(F, fecha6);

	cout << num << endl;

	return 0;
}

template <class T>
int contarX(Fila<T> f, T item)
{
	int cont = 0;
	Iterator<T> it(f);
	for( ; it.hayMasElementos(); it.avanzar())
	{
		if(it.getActual() == item) //sobrecarga del operoador ==
		{
			cont++;
		}
	}
	return cont;
}

