/*
 * Libro.cpp
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */


#include "Libro.h"

Libro::Libro(std::string titulo, int anio, double precioBase, std::string autor, std::string editorial, bool bestSeller):
Documento(titulo, anio, precioBase), autor(autor), editorial(editorial), bestSeller(bestSeller){}

void Libro::mostrarInfo(){
	Documento::mostrarInfo();
	cout << this->autor << endl;
	cout << this->editorial << endl;
	cout << this->bestSeller << endl;
}

double Libro::calcularCosto(){
	if(this->esBestSeller()){
		return (1+0.10+0.21) * this->precioBase;
	} else {
		return (1 + 0.21) * this->precioBase;
	}
}

bool Libro::esBestSeller(){
	return this->bestSeller;
}


