#pragma once
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Point {


private:
	int start;
	int dead;
	int x;
	int y;
public:
	static void textcolor(int foreground, int background) {
		int color = foreground + background * 16;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

	};
	Point(int x = 0, int y = 0);
	void init(int, int);
	void put_char(char);
	void gotoXY();
	int getStart();
	void setStart(int start);
	int getDead();
	void setDead(int dead);
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();

};


