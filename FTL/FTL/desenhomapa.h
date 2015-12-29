#pragma once
#ifndef DESENHOMAPA_H
#define DESENHOMAPA_H
#include "consola.h"
#include <iostream>

using namespace std;

class desenho
{
	int x;
	int y;

public:
	desenho(int x, int y);
	desenho();
	~desenho();

	void desenhoLimitesNave();
	void desenhoLimitesInfo();
	void desenhoLimitesComandos();
	void desenhoPortas();
	void desenhoSala();


};



#endif