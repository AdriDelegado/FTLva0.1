#include "propulsor.h"

propulsor::propulsor(int nPropulsor, int id):sala(id){	//contrutor
	this->nivelPropulsor = nPropulsor;
}
propulsor::propulsor(){}				//contrutor por defeito
propulsor::~propulsor(void){}			//destrutor

int propulsor::getNivelPropulsor(){
	return this->nivelPropulsor;
}

void propulsor::setNivelPropulsor(int newValorNivelPropulsor){
	this->nivelPropulsor = newValorNivelPropulsor;
}