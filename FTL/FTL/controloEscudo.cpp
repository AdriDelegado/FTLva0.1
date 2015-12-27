#include "controloEscudo.h"

controloEscudo::controloEscudo(int nEscudo, int nEscudoActual, int id) : sala(id){		//contrutor
	this->nivelEscudo = nEscudo;
	this->nivelEscudoActual = nEscudoActual;
}

controloEscudo::controloEscudo(){}									//construtor por defeito
controloEscudo::~controloEscudo(void){}								//destrutor


int controloEscudo::getNivelEscudo(){
	return this->nivelEscudo;
}
int controloEscudo::getNivelEscudoActual(){
	return this->nivelEscudoActual;
}

void controloEscudo::setNivelEscudo(int newNivelEscudo){
	this->nivelEscudo = newNivelEscudo;
}
void controloEscudo::setNivelEscudoActual(int newNivelEscudoActual){
	this->nivelEscudoActual = newNivelEscudoActual;
}