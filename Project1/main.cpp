#pragma warning (disable:4996)
#include "menu.h"
#include "play.h"
void hidecursor();

int main()
{
	srand(time(NULL));

	char a;
	int b;
	int j = 0;

	Menu menu1;
	menu1.plsASE();
	a = getch();

	while (1)
	{

		int i = 1;
		Play play1;
		play1.setLevel(j);
		Point a;
		Point::textcolor(WHITE, BLACK);
		cout << "press to start";
		a = getch();
		system("CLS");
		a.init(50, 25);

		a.gotoXY();
		cout << "press to start";

		play1.show(1);
		a = getch();
		system("CLS");
		while (1)
		{

			hidecursor();
			play1.show(i);
			b = play1.clash(i);
			if (b == Play::OBSTACLE)
				break;
			if (b == Play::SUCESS)
				break;
			play1.wait();
			play1.readyForStage(i);
			i++;

		}

		if (b == Play::OBSTACLE)
			break;
		if (b == Play::SUCESS)
		{

			system("CLS");
			j++;
		}


	}
	return 0;
}


void hidecursor()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}
