#include "interface.h"

userInterface::userInterface(void){}
userInterface::~userInterface(void){}

void userInterface::novoJogo(){
	//comando ordem; //verificar se vamos ter comandos para alem de andar de sala em sala 
	Consola c;
	int flag=0;
	nave spaceShip;		//aqui ja tem as salas
	c.setBackgroundColor(c.PRETO);
	//c.setTextSize(10, 10);
	c.setScreenSize(600, 600);
	desenhaInterfaceInit(c);
	//this->x = 0;
	//this->y = 0;
	//while (1)
	//{
	//	/*limpaComando();
	//	escreveComando();
	//	string comando;

	//	getline(cin, comando);*/

	//	/*separaComando(comando, comObj);
	//	trataComando(comObj, Mapa, pop);*/

	////	desenhaSpaceShip(spaceShip);

	//	//if(flag==0)
	//	//PlaySound(TEXT("..\\SOUNDS\\GOT.WAV"), NULL, SND_ASYNC | SND_LOOP);


	//	flag++;

	//}
}

void userInterface::desenhaInterfaceInit(Consola c)
{
	c.clrscr();
	c.gotoxy(0, 0);

	//mapa
	c.drawLine(10, 30, 390, 30, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(10, 30, 10, 400, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(10, 400, 390, 400, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(390, 400, 390, 30, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2

	//comandos
	c.drawLine(10, 420, 390, 420, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(390, 420, 390, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(10, 470, 390, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(10, 420, 10, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2

	//informações
	c.drawLine(420, 30, 710, 30, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(710, 30, 710, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(420, 30, 420, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(420, 470, 710, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2

}
//void desenhaFundo(int x, int y);
//void desenhaSpaceShip(nave &n);                             //vai iniciar o desenho da nave
//void respostasComandos(string introComando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirmação ou nao
//void escreveComando();								//funcao para pedir comandos
//void desenhaInterfaceInit();						//desenha uma intercafe
//void limpaComando();								//limpa comandos ??