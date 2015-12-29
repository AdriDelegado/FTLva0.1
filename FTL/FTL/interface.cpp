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



	

	

	
	

//void desenhaFundo(int x, int y);
//void desenhaSpaceShip(nave &n);                             //vai iniciar o desenho da nave
//void respostasComandos(string introComando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirmação ou nao
//void escreveComando();								//funcao para pedir comandos
//void desenhaInterfaceInit();						//desenha uma intercafe
//void limpaComando();								//limpa comandos ??