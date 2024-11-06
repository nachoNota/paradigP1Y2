/*
 * Venta.h
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */

#ifndef VENTA_H_
#define VENTA_H_

#include <vector>
#include "Fecha.h"
#include "Documento.h"

class Venta{
private:
	static int autoNumerico;
	Fecha fecha;
	int codigo;
	vector<Documento *> documentos;

public:
	Venta(vector<Documento *> documentos);
	void mostarInfo();
	Fecha getFecha();
	double calcularMonto();
};



#endif /* VENTA_H_ */
