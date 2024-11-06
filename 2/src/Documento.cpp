/*
 * Documento.cpp
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */

#include<Documento.h>

int Documento::autoNumerico = 0;

Documento::Documento(std::string titulo, int anio, double precioBase):
titulo(titulo), anio(anio), precioBase(precioBase){
	autoNumerico++;
	this->codigo = autoNumerico;
}

void Documento::mostrarInfo(){
	std::cout << this->titulo << endl;
	std::cout << this->anio << endl;
	std::cout << this->precioBase << endl;
}

Documento::~Documento(){

}

