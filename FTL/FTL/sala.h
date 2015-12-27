#pragma once
#ifndef SALA_H
#define SALA_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class sala
{
	int id;
	int oxigenio;
	int integridade;
	bool brecha;
	bool fogo;
	bool cc;  // o que é cc ?
	int numeroOcupantes;

	
public:
	sala(int id);
	sala();
	~sala(void);

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