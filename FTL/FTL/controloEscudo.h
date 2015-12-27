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
	controloEscudo(int nEscudo, int nEscudoActual);		//contrutor
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
	int setNivelEscudo();
	int setNivelEscudoActual();

	virtual int setId();
	virtual int setOxigenio();
	virtual int setIntegridade();
	virtual bool setBrecha();
	virtual bool setFogo();
	virtual bool setCc();  // o que é cc ?
	virtual int setNumeroOcupantes();
};


#endif