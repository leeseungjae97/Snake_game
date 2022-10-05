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
	char mainMenu(); // 메인메뉴
	char startGameMenu(); //게임시작메뉴
	char rankingMenu(); //RANKING메뉴
	void texTxy(int y , int x );
	void menuMain(); // 메뉴 동작
};