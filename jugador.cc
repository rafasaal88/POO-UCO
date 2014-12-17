#include <string>
#include "jugador.h"
#include <fstream>
#include <cstdlib>
#include <iostream>


using namespace std;

//Constructor parametrizado
Jugador::Jugador(string DNI, string codigo, string nombre, string apellidos, string direccion, string localidad, string provincia, string pais, int dinero):Persona(DNI, nombre, apellidos, direccion, localidad, provincia, pais)
{
	setDinero(dinero);
	setCodigo(codigo);
}

//Constructor de copia
Jugador::Jugador(const Jugador &j):Persona(j)
{
	dinero_=j.dinero_;
	codigo_=j.codigo_;
}

//Funcion para volcar del fichero de texto los datos hacia la lista de apuestas
void Jugador::setApuestas()
{
	ifstream entrada((getDNI()+".txt").c_str()); // abrimos el fichero

	char tipo[10], valor[10], cantidad[10];
	Apuesta a; //declaramos una estructura auxiliar
	apuestas_.clear(); //Limpiamos la lista

	while (entrada.getline(tipo,256,','))
	{
		entrada.getline(valor,256,',');
		entrada.getline(cantidad,256,'\n');

		a.tipo=atoi(tipo);
		a.valor=valor;
		a.cantidad=atoi(cantidad);

		apuestas_.push_back(a);
	}

	entrada.close(); //cerramos el fichero
}