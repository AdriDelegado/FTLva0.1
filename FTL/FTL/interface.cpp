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
<<<<<<< HEAD
	c.gotoxy(0, 0);

	//mapa
	c.drawLine(10, 30, 750, 30, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	c.drawLine(10, 30, 10, 650, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	//c.drawLine(10, 400, 390, 400, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	//c.drawLine(390, 400, 390, 30, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2

	//comandos
	//c.drawLine(10, 420, 390, 420, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	//c.drawLine(390, 420, 390, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	//c.drawLine(10, 470, 390, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	//c.drawLine(10, 420, 10, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2

	////informações
	//c.drawLine(420, 30, 710, 30, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	//c.drawLine(710, 30, 710, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	//c.drawLine(420, 30, 420, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
	//c.drawLine(420, 470, 710, 470, RGB(255, 255, 255)); //int x1, int y1, int x2, int y2
=======
	//inicio da borda da nave
	c.gotoxy(4, 2);
	cout << (char)218;
	c.gotoxy(5, 2);
	for (int i = 5; i < 80; i++)
	{
		c.gotoxy(i, 2);
		cout << (char)196;
	}
	c.gotoxy(80, 2);
	cout << (char)191;
	for (int i = 3; i < 20; i++)
	{
		c.gotoxy(4, i);
		cout << (char)179;
	}
	c.gotoxy(4, 20);
	cout << (char)192;
	c.gotoxy(5, 20);
	for (int i = 5; i < 80; i++)
	{
		c.gotoxy(i, 20);
		cout << (char)196;
	}
	c.gotoxy(80, 20);
	cout << (char)217;
	for (int i = 3; i < 20; i++)
	{
		c.gotoxy(80, i);
		cout << (char)179;
	}
	//fim das bordas do mapa pra nave

	//inicio da borda de status
	c.gotoxy(83, 2); //desenha esquina superior esquerda
	cout << (char)218;
	c.gotoxy(84, 2);
	for (int i = 84; i < 114; i++)//desenha linha horizontal top
	{
		c.gotoxy(i, 2);
		cout << (char)196;
	}
	c.gotoxy(114, 2); //desenha esquina superior direita
	cout << (char)191;
	for (int i = 3; i < 20; i++) //desenha linha vertical direita
	{
		c.gotoxy(114, i);
		cout << (char)179;
	}
	c.gotoxy(83, 20);
	cout << (char)192; //desenha esquina esquerda inferior
	c.gotoxy(84, 20);
	for (int i = 84; i < 114; i++) //desenha linha horizontal inferior
	{
		c.gotoxy(i, 20);
		cout << (char)196;
	}
	c.gotoxy(114, 20);
	cout << (char)217; //desenha esquina direita inferior
	for (int i = 3; i < 20; i++) //desenha linha vertical esquerda
	{
		c.gotoxy(83, i);
		cout << (char)179;
	}

	//fim da borda do status

	//inicio da borda dos comandos

	c.gotoxy(4, 23);
	cout << (char)218;
	c.gotoxy(5, 23);
	for (int i = 5; i < 80; i++)
	{
		c.gotoxy(i, 23);
		cout << (char)196;
	}
	c.gotoxy(80, 23);
	cout << (char)191;
	for (int i = 24; i < 26; i++)
	{
		c.gotoxy(4, i);
		cout << (char)179;
	}
	c.gotoxy(4, 26);
	cout << (char)192;
	c.gotoxy(5, 26);
	for (int i = 5; i < 80; i++)
	{
		c.gotoxy(i, 26);
		cout << (char)196;
	}
	c.gotoxy(80, 26);
	cout << (char)217;
	for (int i = 24; i < 26; i++)
	{
		c.gotoxy(80, i);
		cout << (char)179;
	}
	//fim da borda de comandos

	//inicio desenho das salas

	//salas da primeira linha
	c.gotoxy(5, 3);
	for (int i = 5; i < 19; i++) // sala 1
	{
		c.gotoxy(i, 3);
		cout << (char)219;
		for (int j = 3; j < 8; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	c.gotoxy(20, 3);
	for (int i = 20; i < 34; i++) // sala 2
	{
		c.gotoxy(i, 3);
		cout << (char)219;
		for (int j = 3; j < 8; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	c.gotoxy(35, 3);
	for (int i = 35; i < 49; i++) // sala 3
	{
		c.gotoxy(i, 3);
		cout << (char)219;
		for (int j = 3; j < 8; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	c.gotoxy(50, 3);
	for (int i = 50; i < 64; i++) // sala 4
	{
		c.gotoxy(i, 3);
		cout << (char)219;
		for (int j = 3; j < 8; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	//salas da segunda linha
	c.gotoxy(20, 9);
	for (int i = 20; i < 34; i++) // sala 5
	{
		c.gotoxy(i, 9);
		cout << (char)219;
		for (int j = 9; j < 14; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	c.gotoxy(35, 9);
	for (int i = 35; i < 49; i++) // sala 6
	{
		c.gotoxy(i, 9);
		cout << (char)219;
		for (int j = 9; j < 14; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	c.gotoxy(50, 9);
	for (int i = 50; i < 64; i++) // sala 7
	{
		c.gotoxy(i, 9);
		cout << (char)219;
		for (int j = 9; j < 14; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	c.gotoxy(65, 9);
	for (int i = 65; i < 79; i++) // sala 8
	{
		c.gotoxy(i, 9);
		cout << (char)219;
		for (int j = 9; j < 14; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}


	//salas da terceira linha
	c.gotoxy(5, 15);
	for (int i = 5; i < 19; i++) // sala 9
	{
		c.gotoxy(i, 15);
		cout << (char)219;
		for (int j = 15; j < 20; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	c.gotoxy(20, 15);
	for (int i = 20; i < 34; i++) // sala 10
	{
		c.gotoxy(i, 15);
		cout << (char)219;
		for (int j = 15; j < 20; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	c.gotoxy(35, 15);
	for (int i = 35; i < 49; i++) // sala 11
	{
		c.gotoxy(i, 15);
		cout << (char)219;
		for (int j = 15; j < 20; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	c.gotoxy(50, 15);
	for (int i = 50; i < 64; i++) // sala 12
	{
		c.gotoxy(i, 15);
		cout << (char)219;
		for (int j = 15; j < 20; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}


	//fim desenho salas
	
>>>>>>> origin/master

}
//void desenhaFundo(int x, int y);
//void desenhaSpaceShip(nave &n);                             //vai iniciar o desenho da nave
//void respostasComandos(string introComando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirmação ou nao
//void escreveComando();								//funcao para pedir comandos
//void desenhaInterfaceInit();						//desenha uma intercafe
//void limpaComando();								//limpa comandos ??