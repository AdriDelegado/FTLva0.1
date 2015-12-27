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
	beliche(int nBeliches);			//contrutor
	beliche();						//construtor por defeito
	~beliche(void);					//destrutor

	//------GET---------
	int getNumeroBeliches();

	virtual int getId()=0;
	virtual int getOxigenio()=0;
	virtual int getIntegridade()=0;
	virtual bool getBrecha()=0;
	virtual bool getFogo()=0;
	virtual bool getCc()=0;  // o que é cc ?
	virtual int getNumeroOcupantes() = 0;

	//------SET---------
	int setNumeroBeliches();

	virtual int setId();
	virtual int setOxigenio();
	virtual int setIntegridade();
	virtual bool setBrecha();
	virtual bool setFogo();
	virtual bool setCc();  // o que é cc ?
	virtual int setNumeroOcupantes();
};


#endif