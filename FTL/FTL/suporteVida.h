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
	virtual int getId() = 0;
	virtual int getOxigenio() = 0;
	virtual int getIntegridade() = 0;
	virtual bool getBrecha() = 0;
	virtual bool getFogo() = 0;
	virtual bool getCc() = 0;  // o que é cc ?
	virtual int getNumeroOcupantes() = 0;

	//------SET---------
	virtual void setId(int id) = 0;
	virtual void setOxigenio(int newOxigenio) = 0;
	virtual void setIntegridade(int newIntegridade) = 0;
	virtual void setBrecha(bool newValorBrecha) = 0;
	virtual void setFogo(bool newValorFogo) = 0;
	virtual void setCc(bool newValorCC) = 0;  // o que é cc ?
	virtual void setNumeroOcupantes(int newValorOcupantes) = 0;
};


#endif