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
	virtual int setId();
	virtual int setOxigenio();
	virtual int setIntegridade();
	virtual bool setBrecha();
	virtual bool setFogo();
	virtual bool setCc();  // o que é cc ?
	virtual int setNumeroOcupantes();
};


#endif