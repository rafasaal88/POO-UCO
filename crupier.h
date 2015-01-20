#ifndef CRUPIER_H
#define CRUPIER_H


#include "persona.h"
#include <iostream>
#include <string>

using namespace std;

class Crupier: public Persona{ //La clase crupier hereda de la clase persona
	private:
		string codigo_;	
		

	public:
		//Constructor parametrizado
		Crupier(string DNI, string codigo, string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="", string pais="");

		//Constructor de copia
		Crupier(const Crupier &c);


		string getCodigo(){return codigo_;}; //Observador de codigo

		void setCodigo(string codigo){this->codigo_=codigo;}; //Modificador de codigo
};

#endif
