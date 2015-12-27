
#include <string>
#include <ostream>
#include <iostream>
#include <sstream>
#include "sala.h"
#include "consola.h"
using namespace std;

void menuPrincipal();
void creditos();

int main(){
	menuPrincipal();
	return 0;
}
void menuPrincipal(){
	Consola c;
	c.setTextColor(c.BRANCO_CLARO);
	c.setBackgroundColor(c.PRETO);
	c.gotoxy(10, 10);
	cout << "INICIAR";
	c.gotoxy(10, 11);
	cout << "SETTINGS";
	c.gotoxy(10, 12);
	cout << "CREDITS" << endl;

	char tecla;
	
	int x = 7, y = 10;
	c.gotoxy(x, y);
	cout << '>';
	while (1) {
		tecla = c.getch();
		if (tecla == c.ENTER){
			if (y == 10){
				// INICIA o JOGO
			}
			if (y == 11){
				// ABRE OS SETTINGS
			}
			if (y == 12){
				c.clrscr();
				creditos();
			}

		}
		if ((tecla != c.ESQUERDA) && (tecla != c.DIREITA) &&
			(tecla != c.CIMA) && (tecla != c.BAIXO)) continue;

		c.gotoxy(x, y);
		cout << ' ';

		if (tecla == c.CIMA){
			y--;
			if (y == 9){				// verfica a posi�a�o  ">" para qeu nao exeda o limite desejado
				y = 12;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				c.gotoxy(x, y);
				cout << '>';
			}
		}
		if (tecla == c.BAIXO){
			y++;
			if (y == 13){				// verfica a posi�a�o  ">" para qeu nao exeda o limite desejado
				y = 10;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				c.gotoxy(x, y);
				cout << '>';
			}
		}
	}
}

void creditos(){
	Consola c;
	char tecla;
	

	c.gotoxy(10, 10);
	cout << "CREDITS";
	c.gotoxy(10, 12);
	cout << "NOME: ADRIEL NICOLAU";
	c.gotoxy(10, 13);
	cout << "NUM_ALUNO: 21200802";

	c.gotoxy(10, 16);
	cout << "NOME: NUNO CURADO";
	c.gotoxy(10, 17);
	cout << "NUM_ALUNO: ????????";

	c.gotoxy(10, 19);
	cout << "PRIMA ESC PARA VOLTAR";	
	
	while (1){
		tecla = c.getch();
		if (tecla == c.ESCAPE){
			c.clrscr();
			menuPrincipal();

		}
	}
}