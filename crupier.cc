#include "crupier.h"
#include <iostream>
#include <string>


using namespace std;

//Constructor parametrizado
Crupier::Crupier(string DNI, string codigo, string nombre, string apellidos, string direccion, string localidad, string provincia, string pais):Persona(DNI, nombre, apellidos, direccion, localidad, provincia, pais)
{
	setCodigo(codigo);
}

//Constructor de copia
Crupier::Crupier(const Crupier &c):Persona(c)
{
	setCodigo(c.codigo_);
}
