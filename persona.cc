#include "persona.h"
#include <string>
#include <iostream>


using namespace std;

//Constructor parametrizado
Persona::Persona(string DNI, string nombre, string apellidos, string direccion, string localidad, string provincia, string pais)

{
	setDNI(DNI);
	setNombre(nombre);
	setApellidos(apellidos);
	setDireccion(direccion);
	setLocalidad(localidad);
	setProvincia(provincia);
	setPais(pais);
}
//Constructor de copia
Persona::Persona(const Persona &p)
{
	DNI_=p.DNI_;
	nombre_=p.nombre_;
	apellidos_=p.apellidos_;
	direccion_=p.direccion_;
	localidad_=p.localidad_;
	provincia_=p.provincia_;
	pais_=p.pais_;
}
