#pragma once
#ifndef	CONTROLOESCUDO_H
#define CONTROLOESCUDO_H
#include <iostream>
#include <string>
#include <vector>

#include "sala.h"
using namespace std;

class controloEscudo: public sala{
	int nivelEscudo;
	int nivelEscudoActual;
public:
	controloEscudo(int nEscudo, int nEscudoActual,int id);		//contrutor
	controloEscudo();									//construtor por defeito
	~controloEscudo(void);								//destrutor

	//------GET---------
	int getNivelEscudo();
	int getNivelEscudoActual();

	int getId();
	int getOxigenio();
	int getIntegridade();
	bool getBrecha();
	bool getFogo();
	bool getCc();  // o que é cc ?
	int getNumeroOcupantes();

	//------SET---------
	void setNivelEscudo(int newNivelEscudo);
	void setNivelEscudoActual(int newNivelEscudoActual);

	void setId(int id);
	void setOxigenio(int newOxigenio);
	void setIntegridade(int newIntegridade);
	void setBrecha(bool newValorBrecha);
	void setFogo(bool newValorFogo);
	void setCc(bool newValorCC);  // o que é cc ?
	void setNumeroOcupantes(int newValorOcupantes);
};


#endif