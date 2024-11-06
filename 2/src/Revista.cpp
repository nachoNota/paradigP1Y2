/*
 * Revista.cpp
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */

#include "Revista.h"
#include "Fecha.h"

Revista::Revista(std::string titulo, int anio, double precioBase, int numero, int volumen, string campo):
Documento(titulo, anio, precioBase), numero(numero), volumen(volumen), campoTematico(campo){}

void Revista::mostrarInfo(){
	Documento::mostrarInfo();
	cout << this->numero << endl;
	cout << this->campoTematico << endl;
}

double Revista::calcularCosto(){
	if(this->calcularAntiguedad() >= 5){
		return (1 + 0.15 + 0.21) * this->precioBase;
	} else {
		return (1 + 0.21) * this->precioBase;
	}
}

int Revista::calcularAntiguedad(){
	Fecha fechaActual;
	int anioActual = fechaActual.getAnio();
	return anioActual - this->anio;

}
