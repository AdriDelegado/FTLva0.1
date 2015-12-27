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
	maquinas(int id);					//contrutor
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
	virtual void setId(int id) = 0;
	virtual void setOxigenio(int newOxigenio) = 0;
	virtual void setIntegridade(int newIntegridade) = 0;
	virtual void setBrecha(bool newValorBrecha) = 0;
	virtual void setFogo(bool newValorFogo) = 0;
	virtual void setCc(bool newValorCC) = 0;  // o que é cc ?
	virtual void setNumeroOcupantes(int newValorOcupantes) = 0;
};


#endif