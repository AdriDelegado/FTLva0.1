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
	propulsor(int nPropulsor, int id);	//contrutor
	propulsor();				//contrutor por defeito
	~propulsor(void);			//destrutor

		//------GET---------
	int getNivelPropulsor();

	//virtual int getId() = 0;
	//virtual int getOxigenio() = 0;
	//virtual int getIntegridade() = 0;
	//virtual bool getBrecha() = 0;
	//virtual bool getFogo() = 0;
	//virtual bool getCc() = 0;  // o que é cc ?
	//virtual int getNumeroOcupantes() = 0;

	//------SET---------
	void setNivelPropulsor( int newValorNivelPropulsor);

	//virtual void setId(int id) = 0;
	//virtual void setOxigenio(int newOxigenio) = 0;
	//virtual void setIntegridade(int newIntegridade) = 0;
	//virtual void setBrecha(bool newValorBrecha) = 0;
	//virtual void setFogo(bool newValorFogo) = 0;
	//virtual void setCc(bool newValorCC) = 0;  // o que é cc ?
	//virtual void setNumeroOcupantes(int newValorOcupantes) = 0;
};


#endif