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

	virtual int getId() = 0;
	virtual int getOxigenio() = 0;
	virtual int getIntegridade() = 0;
	virtual bool getBrecha() = 0;
	virtual bool getFogo() = 0;
	virtual bool getCc() = 0;  // o que é cc ?
	virtual int getNumeroOcupantes() = 0;

	//------SET---------
	void setNivelEscudo(int newNivelEscudo);
	void setNivelEscudoActual(int newNivelEscudoActual);

	virtual void setId(int id) = 0;
	virtual void setOxigenio(int newOxigenio) = 0;
	virtual void setIntegridade(int newIntegridade) = 0;
	virtual void setBrecha(bool newValorBrecha) = 0;
	virtual void setFogo(bool newValorFogo) = 0;
	virtual void setCc(bool newValorCC) = 0;  // o que é cc ?
	virtual void setNumeroOcupantes(int newValorOcupantes) = 0;
};


#endif