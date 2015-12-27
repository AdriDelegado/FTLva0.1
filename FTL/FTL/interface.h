#pragma once
#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
// falta add mais includes das restantes classes
#include "nave.h"
#include "sala.h"
#include "beliche.h"
#include "controloEscudo.h"
#include "maquinas.h"
#include "ponte.h"
#include "propulsor.h"
#include "suporteVida.h"
#include "consola.h"
#include "comando.h"

using namespace std;

class userInterface{
	nave spaceShip;
	int x, y; // para desenhas as merdas ?
	static int cor; // para a cor de algo ??
public:
	userInterface(void);
	~userInterface(void);

	void novoJogo();
	void desenhaInterfaceInit(Consola c);
	void desenhaFundo(int x, int y);
	void desenhaSpaceShip(nave &n);                             //vai iniciar o desenho da nave
	void respostasComandos(string introComando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirmação ou nao
	void escreveComando();								//funcao para pedir comandos
	void desenhaInterfaceInit();						//desenha uma intercafe
	void limpaComando();								//limpa comandos ??
	/*void separaComando(string & comando, Comando & comObj);
	void trataComando(Comando & comObj, Territorio & m, vector <Populacao*> & pop);*/
};

#endif