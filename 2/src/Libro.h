/*
 * Libro.h
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */

#ifndef LIBRO_H_
#define LIBRO_H_

#include "Documento.h"
#include <iostream>
using namespace std;

class Libro : public Documento{
private:
	std::string autor;
	std::string editorial;
	bool bestSeller;

public:
	Libro(std::string titulo, int anio, double precioBase, std::string autor, std::string editorial, bool bestSeller);
	void mostrarInfo();
	double calcularCosto();
	bool esBestSeller();
};


#endif /* LIBRO_H_ */
