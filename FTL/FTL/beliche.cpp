#include "beliche.h"

beliche::beliche(int nBeliches, int id) : sala(id){			//contrutor
	this->numeroBeliches = 0;
}

beliche::beliche(){						//construtor por defeito
}

beliche::~beliche(void){}				//destrutor

//------GET---------
int beliche::getNumeroBeliches(){
	return this->numeroBeliches;
}


//------SET---------
void beliche::setNumeroBeliches(int newValorBeliches){
	this->numeroBeliches = newValorBeliches;
}
