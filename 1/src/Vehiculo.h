/*
 * Vehiculo.h
 *
 *  Created on: 12 oct 2024
 *      Author: Ignacio
 */

#ifndef VEHICULO_H_
#define VEHICULO_H_

#include <string>

class Vehiculo{
private:
	bool pesoExcedido(double peso);

protected:
	std::string patente;
	int anioModelo;
	double pesoMax;
	const double INCREMENTO = 0.25;
	double tarifa;
	double calcularIncremento(double peso);

public:
	Vehiculo();
	Vehiculo(std::string patente, int anioModelo, double peso, double tarifa);
	Vehiculo(const Vehiculo &v);
	virtual void escribirInfo();
	double getTarifa();
	virtual double calcularPrecioViaje(double peso);

	virtual ~Vehiculo();
};


#endif /* VEHICULO_H_ */
