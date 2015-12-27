#include "nave.h"

nave::nave(){
	
}
nave::~nave(void){}


vector <tripulacao *> nave::getTripulacao(){
	return this->vTripulacao;
}
vector <sala *> nave::getRooms(){
	return this->rooms;
}

void nave::setTripulacao(tripulacao & t){
	this->vTripulacao.push_back(&t);
}
void nave::setgeRooms(sala & s){
	this->rooms.push_back(&s);
}
