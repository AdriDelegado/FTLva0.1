#pragma once
#ifndef	MAQUINAS_H
#define MAQUINAS_H
#include <iostream>
#include <string>
#include <vector>

#include "sala.h"
using namespace std;

class maquinas: public sala{

public:
	maquinas();							//contrutor por defeito
	~maquinas(void);					//destrutor
	
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