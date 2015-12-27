#pragma once
#ifndef NAVE_H
#define NAVE_H
#include "sala.h"
#include "tripulacao.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class nave
{
	string nome;
	vector <sala *> rooms;
	vector <tripulacao *> vTripulacao ;
public:
	nave();
	~nave(void);
	//void desenhaNave(); //??
	vector <tripulacao *> getTripulacao();
	vector <sala *> getRooms();

	void setTripulacao(tripulacao & t);
	void setgeRooms(sala & s);

};


#endif