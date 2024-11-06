//============================================================================
// Name        : TP4 - PruebaFila.cpp
// Author      : C�tedra Paradigmas de Programaci�n - FACET - UNT
//============================================================================

#include <iostream>

#include "Fila.h"
#include "Iterator.h"

typedef int item;
using namespace std;

int contarX(Fila F, item X);

int main() {

	Fila F;

	if(F.EsFilaVacia())
		cout<<"CORRECTO - La Fila esta vacia"<<endl;
	else
		cout<<"ERROR - La Fila deberia estar vacia"<<endl;

	F.Enfila(1);
	F.Enfila(2);
	F.Enfila(3);
	F.Enfila(1);
	F.Enfila(3);
	F.Enfila(3);

	cout<<"El frente de la fila es: "<<F.Frente()<<endl;

	cout<<"Contenido de la fila luego de insertar 3 items"<<endl;
	F.Mostrar();

	cout<<"Longitud de la fila luego de insertar 3 items: "<<F.Longitud()<<endl;

	F.Defila();

	cout<<"Contenido de la fila luego de eliminar el frente"<<endl;
	F.Mostrar();

	if(F.Pertenece(3))
			cout<<"CORRECTO - El elemento pertenece a la fila"<<endl;
		else
			cout<<"ERROR - El elemento si pertence a la fila"<<endl;

	if(F.Pertenece(999))
			cout<<"ERROR - El elemento NO pertenece a la fila"<<endl;
		else
			cout<<"CORRECTO - El elemento no pertence a la fila"<<endl;


	int cantidad = contarX(F, 3);

	cout<<"Cantidad de elenentos iguales a X:  "<<cantidad<<endl;

	cout<<"Muestro por pantalla la fila luego de invocar a la operacion externa contarX"<<endl;

	Iterator it(F);
	for( ; it.hayMasElementos(); it.avanzar())
	{
		cout << it.getActual() << endl;
	}

	return 0 ;
}

int contarX(Fila F, item X){

	Iterator it(F);
	int cont = 0;

	for(; it.hayMasElementos(); it.avanzar())
	{
		if(it.getActual() == X)
		{
			cont++;
		}
	}

	return cont;
}
