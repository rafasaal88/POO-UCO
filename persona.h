#ifndef PERSONA_H
#define PERSONA_H


#include <iostream>
#include <string>

using namespace std;

class Persona
{
	private:
		string DNI_, nombre_, apellidos_, direccion_, localidad_, provincia_, pais_; //Variables privadas
	

	public:

		//Constructor parametrizado
		Persona(string DNI, string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="", string pais=""); 

		//Constructor de copia
		Persona(const Persona &p);

		//Observadores
		string getDNI(){return DNI_;};
		string getNombre(){return nombre_;};
		string getApellidos(){return apellidos_;};
		string getDireccion(){return direccion_;};
		string getLocalidad(){return localidad_;};
		string getProvincia(){return provincia_;};
		string getPais(){return pais_;};

		//Modificadores
		void setDNI(string DNI){DNI_=DNI;};
		void setNombre(string nombre){nombre_=nombre;};
		void setApellidos(string apellidos){apellidos_=apellidos;};
		void setDireccion(string direccion){direccion_=direccion;};
		void setLocalidad(string localidad){localidad_=localidad;};
		void setProvincia(string provincia){provincia_=provincia;};
		void setPais(string pais){pais_=pais;};

		//Observador que devuelve el apellido y el nombre concatenados
		string getApellidosyNombre(){return apellidos_+", "+nombre_;};
};

#endif