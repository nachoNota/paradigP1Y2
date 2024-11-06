/*
 * Vehiculo.cpp
 *
 *  Created on: 12 oct 2024
 *      Author: Ignacio
 */

#include "Vehiculo.h"
#include <iostream>
using namespace std;

Vehiculo::Vehiculo():patente("SIN PATENTE"), anioModelo(1), pesoMax(1), tarifa(1){}

Vehiculo::Vehiculo(std::string patente, int anioModelo, double peso, double tarifa):
		patente(patente), anioModelo(anioModelo), pesoMax(peso), tarifa(tarifa){}

Vehiculo::Vehiculo(const Vehiculo &v):
		patente(v.patente), anioModelo(v.anioModelo), pesoMax(v.pesoMax), tarifa(v.tarifa){}

Vehiculo::~Vehiculo(){
	cout << "Destructor correspondiente al vehiculo" << this->patente << endl;
}

bool Vehiculo::pesoExcedido(double peso){
	bool excedido = pesoMax < peso;
	return excedido;
}

double Vehiculo::calcularIncremento(double peso){
	double montoIncremento = 0;
	if(pesoExcedido(peso)){
		montoIncremento = this->getTarifa() * INCREMENTO;
	}
	return montoIncremento;
}

void Vehiculo::escribirInfo(){
	cout << "Patente: " << this->patente <<
			"Tarifa: " << this ->tarifa << endl;
}

double Vehiculo::getTarifa(){
	return this->tarifa;
}

double Vehiculo::calcularPrecioViaje(double peso){
	double precio = this->getTarifa() + this->calcularIncremento(peso);
	return precio;
}


