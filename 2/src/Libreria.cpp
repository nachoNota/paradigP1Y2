/*
 * Libreria.cpp
 *
 *  Created on: 25 oct. 2024
 *      Author: Alumno
 */

#include "Libreria.h"

Libreria::Libreria(std::string nombre):nombre(nombre){}

void Libreria::crearVenta(vector<Documento *> documentos){
	Venta * venta = new Venta(documentos);
	ventas.push_back(venta);
}

void Libreria::listarInfo(){
	for(Venta * venta : ventas){
		venta->mostarInfo();
	}
}
void Libreria::ventasPorFecha(Fecha fecha){
	for(Venta * venta : ventas){
		if(operator-(fecha, venta->getFecha()) == 0){
			venta->mostarInfo();
		}
	}
}

double Libreria::montoEnUnMes(int mes){
	double monto = 0;
	for(Venta * venta : ventas){
			if(venta->getFecha().getMes() == mes){
				monto += venta->calcularMonto();
			}
	}
	return monto;
}
