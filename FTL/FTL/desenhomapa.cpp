#include "desenhomapa.h"


desenho::desenho()
{

}

desenho::desenho(int x, int y)
{

}

desenho::~desenho(void)
{

}

void desenho::desenhoPortas()
{
	Consola c;

	//portas horizontais
	c.gotoxy(19, 5);
	cout << (char)205;
	c.gotoxy(34, 5);
	cout << (char)205;
	c.gotoxy(49, 5);
	cout << (char)205;
	c.gotoxy(19, 17);
	cout << (char)205;
	c.gotoxy(34, 17);
	cout << (char)205;
	c.gotoxy(49, 17);
	cout << (char)205;
	c.gotoxy(34, 11);
	cout << (char)205;
	c.gotoxy(49, 11);
	cout << (char)205;
	c.gotoxy(64, 11);
	cout << (char)205;

	//portas verticais
	c.gotoxy(27, 8);
	cout << (char)186;
	c.gotoxy(42, 8);
	cout << (char)186;
	c.gotoxy(57, 8);
	cout << (char)186;
	c.gotoxy(27, 14);
	cout << (char)186;
	c.gotoxy(42, 14);
	cout << (char)186;
	c.gotoxy(57, 14);
	cout << (char)186;
}

void desenho::desenhoLimitesComandos()
{
	Consola c;
	c.gotoxy(29, 22);
	cout << "LINHA DE COMANDOS";
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

}

void desenho::desenhoLimitesInfo()
{
	Consola c;
	c.gotoxy(94, 1);
	cout << "INFORMACAO";

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
}

void desenho::desenhoLimitesNave()
{
	Consola c;

	c.gotoxy(30, 1);
	cout << "NAVE ESPACIAL";

	//inicio da borda da nave
	c.gotoxy(4, 2);
	cout << (char)218;

	c.gotoxy(5, 2);
	for (int i = 5; i < 64; i++)
	{
		c.gotoxy(i, 2);
		cout << (char)196;
	}

	c.gotoxy(64, 2);
	cout << (char)191;
	for (int i = 3; i < 9; i++)
	{
		c.gotoxy(4, i);
		cout << (char)179;
	}

	c.gotoxy(4, 8);
	cout << (char)192;

	c.gotoxy(5, 8);
	for (int i = 5; i < 19; i++)
	{
		c.gotoxy(i, 8);
		cout << (char)196;
	}
	c.gotoxy(5, 14);
	for (int i = 5; i < 19; i++)
	{
		c.gotoxy(i, 14);
		cout << (char)196;
	}

	c.gotoxy(18, 8);
	cout << (char)191;
	c.gotoxy(18, 14);
	cout << (char)217;

	c.gotoxy(18, 9);
	for (int i = 9; i < 14; i++)
	{
		c.gotoxy(18, i);
		cout << (char)179;
	}

	c.gotoxy(4, 14);
	for (int i = 14; i < 20; i++)
	{
		c.gotoxy(4, i);
		cout << (char)179;
	}
	c.gotoxy(4, 14);
	cout << (char)218;

	c.gotoxy(4, 20);
	cout << (char)192;
	c.gotoxy(5, 20);
	for (int i = 5; i < 64; i++)
	{
		c.gotoxy(i, 20);
		cout << (char)196;
	}
	c.gotoxy(64, 20);
	cout << (char)217;
	for (int i = 3; i < 8; i++)
	{
		c.gotoxy(64, i);
		cout << (char)179;
	}

	c.gotoxy(64, 15);
	for (int i = 15; i < 20; i++)
	{
		c.gotoxy(64, i);
		cout << (char)179;
	}

	c.gotoxy(64, 14);
	cout << (char)218;

	c.gotoxy(65, 14);
	for (int i = 65; i < 79; i++)
	{
		c.gotoxy(i, 14);
		cout << (char)196;
	}

	c.gotoxy(79, 14);
	cout << (char)217;

	c.gotoxy(79, 8);
	for (int i = 8; i < 14; i++)
	{
		c.gotoxy(79, i);
		cout << (char)179;
	}

	c.gotoxy(79, 8);
	cout << (char)191;

	c.gotoxy(65, 8);
	for (int i = 65; i < 79; i++)
	{
		c.gotoxy(i, 8);
		cout << (char)196;
	}

	c.gotoxy(64, 8);
	cout << (char)192;

	//fim das bordas do mapa pra nave
}

void desenho::desenhoSala()
{
	Consola c;

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
}