/*
 * Revista.h
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */

#ifndef REVISTA_H_
#define REVISTA_H_

#include "Documento.h"
#include<iostream>
using namespace std;

class Revista : public Documento{
private:
	int numero;
	int volumen;
	string campoTematico;
	int calcularAntiguedad();

public:
	Revista(std::string titulo, int anio, double precioBase, int numero, int volumen, string campo);
	void mostrarInfo();
	double calcularCosto();
};


#endif /* REVISTA_H_ */
