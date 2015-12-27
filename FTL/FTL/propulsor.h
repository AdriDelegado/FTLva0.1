#pragma once
#ifndef PROPULSOR_H
#define PROPULSOR_H
#include "sala.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class propulsor : public sala
{
	int nivelPropulsor;
public:
	propulsor(int nPropulsor);	//contrutor
	propulsor();				//contrutor por defeito
	~propulsor(void);			//destrutor

		//------GET---------
	int getNivelPropulsor();

	virtual int getId() = 0;
	virtual int getOxigenio() = 0;
	virtual int getIntegridade() = 0;
	virtual bool getBrecha() = 0;
	virtual bool getFogo() = 0;
	virtual bool getCc() = 0;  // o que é cc ?
	virtual int getNumeroOcupantes() = 0;

	//------SET---------
	int setNivelPropulsor();

	virtual int setId();
	virtual int setOxigenio();
	virtual int setIntegridade();
	virtual bool setBrecha();
	virtual bool setFogo();
	virtual bool setCc();  // o que é cc ?
	virtual int setNumeroOcupantes();
};


#endif