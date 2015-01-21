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
	setDNI(p.DNI_);
	setNombre(p.nombre_);
	setApellidos(p.apellidos_);
	setDireccion(p.direccion_);
	setLocalidad(p.localidad_);
	setProvincia(p.provincia_);
	setPais(p.pais_);
}
