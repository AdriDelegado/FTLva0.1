#include "sala.h"

sala::sala(int id){
	this->id=id;
	this->oxigenio=100;
	this->integridade=100;
	this->brecha = false;
	this->fogo = false;
	this->cc = false;  // o que é cc ?
	this->numeroOcupantes = 0;
}

sala::sala(){}

sala::~sala(void){}

//------GET---------
int sala::getId(){
	return this->id;
}
int sala::getOxigenio(){
	return this->oxigenio;
}
int sala::getIntegridade(){
	return this->integridade;
}
int sala::getNumeroOcupantes(){
	return this->numeroOcupantes;
}
bool sala::getBrecha(){
	return this->brecha;
}
bool sala::getFogo(){
	return this->fogo;
}
bool sala::getCc(){  // o que é cc ?
	return this->cc;
}


//------SET---------
void sala::setId(int id){
	this->id = id;
}
void sala::setOxigenio(int newValorOxigenio){
	this->oxigenio = newValorOxigenio;
}
void sala::setIntegridade(int newValorIntegridade){
	this->integridade = newValorIntegridade;
}
void sala::setNumeroOcupantes(int newValorOcupantes){
	this->numeroOcupantes = newValorOcupantes;
}
void sala::setBrecha(bool newValorBrecha){
	this->brecha = newValorBrecha;
}
void sala::setFogo(bool newValorFogo){
	this->fogo = newValorFogo;
}
void sala::setCc(bool newValorCC){  // o que é cc ?
	this->cc = newValorCC;
}