#pragma once
#pragma warning (disable : 4996)
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
using namespace std;
class Menu {

public:
	void plsASE();
	char mainMenu(); // ���θ޴�
	char startGameMenu(); //���ӽ��۸޴�
	char rankingMenu(); //RANKING�޴�
	void texTxy(int y , int x );
	void menuMain(); // �޴� ����
};