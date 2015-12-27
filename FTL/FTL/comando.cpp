#include "comando.h"

comando::comando(string arg1)
{
	this->arg1 = arg1;
}

comando::comando(){}

string comando::getArg1()
{
	return this->arg1;
}

void comando::setArg1(string sub)
{
	this->arg1 = sub;
}

comando::~comando(void){}
