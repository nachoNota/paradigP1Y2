/*
 * Venta.cpp
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */

#include <Venta.h>

int Venta::autoNumerico = 0;

Venta::Venta(vector<Documento *> documentos){
	this->autoNumerico++;
	this->codigo = autoNumerico;
	Fecha fecha;
	this->fecha = fecha;
}

void Venta::mostarInfo(){
	cout << this->fecha << endl;
}

Fecha Venta::getFecha(){
	return this->fecha;
}

double Venta::calcularMonto(){
	double monto = 0;
	for(Documento * doc : this->documentos){
		monto += doc->calcularCosto();
	}

	return monto;
}


