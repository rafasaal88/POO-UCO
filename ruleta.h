#ifndef RULETA_H
#define RULETA_H

#include "crupier.h"
#include "jugador.h"
#include <string>
#include <cstdlib>
#include <list>

using namespace std;

class Ruleta{
	private:
		int banca_,bola_;
		list <Jugador> jugadores_;
		Crupier crupier_;
		string color(int x);
		string parimpar(int x);
		string altobajo(int x);

	public:
		Ruleta(const Crupier &c); //Constructor de copia

		Crupier getCrupier(){return crupier_;}; //Observador de crupier
		void setCrupier(Crupier c){crupier_=c;}; //Modificador de crupier

		int getBola(){return bola_;}; //Observador de bola
		void setBola(int bola); //Modificador de bola

		int getBanca(){return banca_;}; //Observador de banca
		void setBanca(int banca); //Modificador de banca
		
		list <Jugador> getJugadores(){return jugadores_;}; //Obserbador de jugadores

		//Modificadores
		void addJugador(Jugador j);
				
		int deleteJugador(Jugador j);
		
		int deleteJugador(string DNI);

		void escribeJugadores();

		void leeJugadores();

		void giraRuleta();

		void getPremios();
};

#endif