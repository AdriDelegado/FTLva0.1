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

	int getId();
	int getOxigenio();
	int getIntegridade();
	bool getBrecha();
	bool getFogo();
	bool getCc();  // o que é cc ?
	int getNumeroOcupantes();

	//------SET---------
	void setNivelPropulsor( int newValorNivelPropulsor);

	void setId(int id);
	void setOxigenio(int newOxigenio);
	void setIntegridade(int newIntegridade);
	void setBrecha(bool newValorBrecha);
	void setFogo(bool newValorFogo);
	void setCc(bool newValorCC);  // o que é cc ?
	void setNumeroOcupantes(int newValorOcupantes);
};


#endif