#pragma once
#ifndef PONTE_H
#define PONTE_H
#include "sala.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ponte: public sala
{

public:
	
	ponte();				//contrutor por defeito
	~ponte(void);			//destrutor

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