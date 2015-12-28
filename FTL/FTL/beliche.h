#pragma once
#ifndef BELICHE_H
#define BELICHE_H
#include "sala.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class beliche : public sala
{
	int numeroBeliches;
public:
	beliche(int nBeliches, int id);			//contrutor
	beliche();						//construtor por defeito
	~beliche(void);					//destrutor

	//------GET---------
	int getNumeroBeliches();

	 int getId();
	 int getOxigenio();
	 int getIntegridade();
	 bool getBrecha();
	 bool getFogo();
	 bool getCc();  // o que é cc ?
	 int getNumeroOcupantes();

	//------SET---------
	void setNumeroBeliches(int newValorBeliches);

	 void setId(int id);
	 void setOxigenio(int newOxigenio);
	 void setIntegridade(int newIntegridade);
	 void setBrecha(bool newValorBrecha);
	 void setFogo(bool newValorFogo);
	 void setCc(bool newValorCC);  // o que é cc ?
	 void setNumeroOcupantes(int newValorOcupantes);
};


#endif