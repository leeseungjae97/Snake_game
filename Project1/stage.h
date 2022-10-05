#pragma once
#include <iostream>
using namespace std;
#include <windows.h>
#pragma warning (disable:4996)

class Stage {
private:
	int allMap[5][100][50];
	void mapTut(int(*)[50]);
	void map1(int(*)[50]);
	void map2(int(*)[50]);
	void map3(int(*)[50]);
	void map45(int(*)[50]);
public:
	Stage();
	void showMap(int);
	void gotoXY(int x, int y);
	int(*getallMap())[100][50];
};