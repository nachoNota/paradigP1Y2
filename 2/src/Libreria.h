/*
 * Libreria.h
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */

#ifndef LIBRERIA_H_
#define LIBRERIA_H_

#include <iostream>
#include "Venta.h"

class Libreria{
private:
	std::string nombre;
	vector<Venta *> ventas;

public:
	Libreria(std::string nombre);
	void crearVenta();
	void listarInfo();
	void ventasPorFecha(Fecha fecha);
	double montoEnUnMes(int mes);
};


#endif /* LIBRERIA_H_ */
