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

using namespace std;

class userInterface{
	nave spaceShip;
	int x, y; // para desenhas as merdas ?
	static int cor; // para a cor de algo ??
public:
	userInterface(void);
	~userInterface(void);

	void novoJogo();
	void desenhaFundo(int x, int y);
	void respostasComandos(string comando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirma��o ou nao
	void escreveComando();								//funcao para pedir comandos
	void desenhaInterfaceInit();						//desenha uma intercafe
	void limpaComando();								//limpa comandos ??
	void separaComando(string & comando, Comando & comObj);
	void trataComando(Comando & comObj, Territorio & m, vector <Populacao*> & pop);
};

#endif