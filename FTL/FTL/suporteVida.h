#pragma once
#ifndef SUPORTEVIDA_H
#define SUPORTEVIDA_H
#include "sala.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class suporteVida: public sala
{
public:
	suporteVida(int id);		// contrutor
	suporteVida();				//contrutor por defeito
	~suporteVida(void);			//destrutor

	//------GET---------
	int getId();
	int getOxigenio();
	int getIntegridade();
	bool getBrecha();
	bool getFogo();
	bool getCc();  // o que é cc ?
	int getNumeroOcupantes();

	//------SET---------
	void setId(int id);
	void setOxigenio(int newOxigenio);
	void setIntegridade(int newIntegridade);
	void setBrecha(bool newValorBrecha);
	void setFogo(bool newValorFogo);
	void setCc(bool newValorCC);  // o que é cc ?
	void setNumeroOcupantes(int newValorOcupantes);
};


#endif