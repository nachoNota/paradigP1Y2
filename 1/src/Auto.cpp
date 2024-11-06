/*
 * Auto.cpp
 *
 *  Created on: 23 oct. 2024
 *      Author: Alumno
 */

#include "Auto.h"

static const double Auto::BONUS = 0.10;

double Auto::calcularPrecioViaje(double peso){
	if(peso < this->limiteMin){
		return this->getTarifa() * (1 - this->BONUS) / 100;
	} else {
		return this->getTarifa() + this->calcularIncremento(peso);
	}
}


