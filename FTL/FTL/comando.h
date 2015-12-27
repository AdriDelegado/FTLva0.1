#pragma once
#ifndef COMANDO_H
#define COMANDO_H
#include <iostream>
#include <string>

using namespace std;

class comando
{
	string arg1;

public:
	comando(string arg1);
	comando();
	~comando(void);

	//------GET---------
	string getArg1();

	//------SET---------
	void setArg1(string sub);
};

#endif