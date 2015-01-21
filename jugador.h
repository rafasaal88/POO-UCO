#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>
#include <list>
#include "persona.h"


using namespace std;

//Estructura para guardar las apuestas en la lista apuestas_
struct Apuesta{
	int tipo;
	string valor;
	int cantidad;
};


class Jugador: public Persona
{
	private:
		list<Apuesta>apuestas_; //Lista para guardar las apuestas
		int dinero_; 
		string codigo_;

	public:

		//Constructor parametrizado
		Jugador(string DNI, string codigo, string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="", string pais="", int dinero=1000);

		//Constructor de copia
		Jugador(const Jugador &j);

		int getDinero(){return dinero_;}; //Observador de dinero
		string getCodigo(){return codigo_;}; //Observador de codigo
		list<Apuesta>getApuestas(){return apuestas_;}; //Observador de la lista de apuestas

		void setDinero(int dinero){this->dinero_=dinero;}; //Modificador de dinero
		void setCodigo(string codigo){this->codigo_=codigo;}; //Modificador de codigo		

		void setApuestas(); //Funcion que rellena la lista de estructura a partir de un fichero de texto

};


#endif
