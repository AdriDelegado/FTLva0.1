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
	int getId();
	int getOxigenio();
	int getIntegridade();
	bool getBrecha();
	bool getFogo();
	bool getCc();  // o que é cc ?
	int getNumeroOcupantes();

	//------SET---------
	void setId(int id);
	void setOxigenio(int newOxigenio);
	void setIntegridade(int newIntegridade);
	void setBrecha(bool newValorBrecha);
	void setFogo(bool newValorFogo);
	void setCc(bool newValorCC);  // o que é cc ?
	void setNumeroOcupantes(int newValorOcupantes);
};


#endif