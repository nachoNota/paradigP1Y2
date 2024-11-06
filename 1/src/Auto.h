/*
 * Auto.h
 *
 *  Created on: 23 oct. 2024
 *      Author: Alumno
 */

#ifndef AUTO_H_
#define AUTO_H_

#include "Vehiculo.h"

class Auto : public Vehiculo{
private:
	double limiteMin;
	static const double BONUS = 0.10;

public:
	void escribirInfo();
	double calcularPrecioViaje(double peso);
	~Auto();
};


#endif /* AUTO_H_ */
