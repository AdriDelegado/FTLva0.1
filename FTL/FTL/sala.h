#pragma once
#ifndef SALA_H
#define SALA_H

#include <iostream>
#include <string>
#include <vector>
#include "consola.h"

using namespace std;

class sala
{
	int x;
	int y;
	int id;
	int oxigenio;
	int integridade;
	bool brecha;
	bool fogo;
	bool curtoCircuito;  // o que é cc ?
	int numeroOcupantes;
	

	
public:
	sala(int id);
	sala();
	~sala(void);


	//------GET---------
	virtual int getId() = 0;
	virtual int getOxigenio() = 0;
	virtual int getIntegridade() = 0;
	virtual bool getBrecha() = 0;
	virtual bool getFogo() = 0;
	virtual bool getCurtoCircuito() = 0;  // o que é cc ?
	virtual int getNumeroOcupantes() = 0;
	virtual int getX() = 0;
	virtual int getY() = 0;
	
	//------SET---------
	virtual void setId(int id) = 0;
	virtual void setOxigenio(int newOxigenio) = 0;
	virtual void setIntegridade(int newIntegridade) = 0;
	virtual void setBrecha(bool newValorBrecha) = 0;
	virtual void setFogo(bool newValorFogo) = 0;
	virtual void setCurtoCircuito(bool newValorCC) = 0;  // o que é cc ?
	virtual void setNumeroOcupantes(int newValorOcupantes)=0;
	virtual void setX(int x) = 0;
	virtual void setY(int y) = 0;

};


#endif