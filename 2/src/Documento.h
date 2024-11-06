/*
 * Documento.h
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */

#ifndef DOCUMENTO_H_
#define DOCUMENTO_H_

#include <iostream>
using namespace std;

class Documento{
private:
	static int autonumerico;

protected:
	int codigo;
	std::string titulo;
	int anio;
	double precioBase;

public:
	Documento(std::string titulo, int anio, double precioBase);
	virtual void mostrarInfo();
	virtual double calcularCosto() = 0;

	virtual ~Documento();
};


#endif /* DOCUMENTO_H_ */
