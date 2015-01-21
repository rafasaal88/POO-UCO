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
		void setDNI(string DNI){this->DNI_=DNI;};
		void setNombre(string nombre){this->nombre_=nombre;};
		void setApellidos(string apellidos){this->apellidos_=apellidos;};
		void setDireccion(string direccion){this->direccion_=direccion;};
		void setLocalidad(string localidad){this->localidad_=localidad;};
		void setProvincia(string provincia){this->provincia_=provincia;};
		void setPais(string pais){this->pais_=pais;};

		//Observador que devuelve el apellido y el nombre concatenados
		string getApellidosyNombre(){return apellidos_+", "+nombre_;};
};

#endif
