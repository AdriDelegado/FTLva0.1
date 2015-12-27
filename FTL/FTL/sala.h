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
	int setId();
	int setOxigenio();
	int setIntegridade();
	bool setBrecha();
	bool setFogo();
	bool setCc();  // o que é cc ?
	int setNumeroOcupantes();
};


#endif