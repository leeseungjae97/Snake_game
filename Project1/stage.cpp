#include "stage.h"
#include <iostream>
using namespace std;
#pragma warning (disable:4996)

Stage::Stage()
{
	mapTut(allMap[0]);
	map1(allMap[1]);
	map2(allMap[2]);
	map3(allMap[3]);
	map45(allMap[4]);
};

void Stage::mapTut(int(*tutoMapAry)[50])
{
	int x, y;
	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 50; j++)
		{
			tutoMapAry[i][j] = 0;
		}
	}
	for (x = 0; x < 100; x++) {
		tutoMapAry[x][0] = 1;
		tutoMapAry[x][49] = 1;
	}
	for (y = 0; y < 50; y++) {
		tutoMapAry[0][y] = 1;
		tutoMapAry[99][y] = 1;
	}


	//¸Ê Àå¾Ö¹° (tutorial)

	for (x = 20; x < 80; x++) {
		tutoMapAry[x][24] = 1;
	}
}
void Stage::map1(int(*OneMapAry)[50])
{
	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 50; j++)
		{
			OneMapAry[i][j] = 0;
		}
	}
	int i, x, y;
	for (x = 0; x < 100; x++) {
		OneMapAry[x][0] = 1;
		OneMapAry[x][49] = 1;
	}
	for (y = 0; y < 50; y++) {
		OneMapAry[0][y] = 1;
		OneMapAry[99][y] = 1;
	}

	for (i = 6; i < 42; i++)
	{
		OneMapAry[i][8] = 1;
	}
	for (i = 32; i < 84; i++)
	{
		OneMapAry[i][21] = 1;
	}

	for (i = 26; i < 56; i++)
	{
		OneMapAry[i][28] = 1;
	}
	for (i = 64; i < 96; i++)
	{
		OneMapAry[i][42] = 1;
	}
}
void Stage::map2(int(*twoMapAry)[50])
{
	int x, y, i;
	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 50; j++)
		{
			twoMapAry[i][j] = 0;
		}
	}
	//¸Ê Å×µÎ¸® ºÎºÐ

	for (x = 0; x < 100; x++) {
		twoMapAry[x][0] = 1;
		twoMapAry[x][49] = 1;
	}
	for (y = 0; y < 50; y++) {
		twoMapAry[0][y] = 1;
		twoMapAry[99][y] = 1;
	}


	//¸Ê Àå¾Ö¹° (tutorial)

	for (x = 25; x < 75; x++) {
		twoMapAry[x][24] = 1;
	}
	for (y = 12; y < 38; y++) {
		twoMapAry[49][y] = 1;
	}
	for (i = 0; i < 13; i++) {
		twoMapAry[50 + i][25 + 12] = 1;
		twoMapAry[25 + 12 + i][12] = 1;
		twoMapAry[50 + 12 + i][12 + 6] = 1;
		twoMapAry[25 + i][24 + 6] = 1;
	}
	for (i = 1; i < 6; i++) {
		twoMapAry[25 + 12][12 + i] = 1;
		twoMapAry[50 + 12 + 12][12 + 6 + i] = 1;
		twoMapAry[25][24 + 6 - i] = 1;
		twoMapAry[50 + 12][25 + 12 - i] = 1;
	}

}
void Stage::map3(int(*threeMapAry)[50]) {

	int x, y, i, j;
	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 50; j++)
		{
			threeMapAry[i][j] = 0;
		}
	}
	//¸Ê Å×µÎ¸® ºÎºÐ

	for (x = 0; x < 100; x++) {
		threeMapAry[x][0] = 1;
		threeMapAry[x][49] = 1;
	}
	for (y = 0; y < 50; y++) {
		threeMapAry[0][y] = 1;
		threeMapAry[99][y] = 1;
	}


	//¸Ê Àå¾Ö¹° (tutorial)

	for (i = 0; i < 16; i++) {
		for (j = 0; j < 3; j++) {
			threeMapAry[12 + i][6 + j * (6 + 8)] = 1;
			threeMapAry[12 + 16 + 12 + i][6 + j * (6 + 8)] = 1;
			threeMapAry[12 + (16 + 12) * 2 + i][6 + j * (6 + 8)] = 1;
			threeMapAry[12 + i][(j + 1) * (6 + 8)] = 1;
			threeMapAry[12 + 16 + 12 + i][(j + 1) * (6 + 8)] = 1;
			threeMapAry[12 + (16 + 12) * 2 + i][(j + 1) * (6 + 8)] = 1;
		}
	}
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 3; j++) {
			threeMapAry[12 + j * (12 + 16)][6 + i] = 1;
			threeMapAry[12 + j * (12 + 16)][6 + 8 + 6 + i] = 1;
			threeMapAry[12 + j * (12 + 16)][6 + 2 * (8 + 6) + i] = 1;
			threeMapAry[(j + 1) * (12 + 16)][6 + i] = 1;
			threeMapAry[(j + 1) * (12 + 16)][6 + 8 + 6 + i] = 1;
			threeMapAry[(j + 1) * (12 + 16)][6 + 2 * (8 + 6) + i] = 1;
		}
	}
}
void Stage::map45(int(*fofiMapAry)[50])
{

	int x, y, i;
	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 50; j++)
		{
			fofiMapAry[i][j] = 0;
		}
	}
	//¸Ê Å×µÎ¸® ºÎºÐ

	for (x = 0; x < 100; x++) {
		fofiMapAry[x][0] = 1;
		fofiMapAry[x][49] = 1;
	}
	for (y = 0; y < 50; y++) {
		fofiMapAry[0][y] = 1;
		fofiMapAry[99][y] = 1;
	}


	//¸Ê Àå¾Ö¹° (tutorial)

	for (i = 5; i < 50 - 5; i++) {
		fofiMapAry[1 + 10][1 + i] = 1;
		fofiMapAry[99 - 10][1 + i] = 1;
	}
	for (i = 5 + 6; i < 50 - (5 + 6); i++) {
		fofiMapAry[1 + 10 * 2][1 + i] = 1;
		fofiMapAry[99 - 10 * 2][1 + i] = 1;
	}
	for (i = 5 + 2 * 6; i < 50 - (5 + 2 * 6); i++) {
		fofiMapAry[1 + 10 * 3][1 + i] = 1;
		fofiMapAry[99 - 10 * 3][1 + i] = 1;
	}
	for (i = 4 + 3 * 6; i < 50 - (5 + 3 * 6) + 1; i++) {
		fofiMapAry[1 + 10 * 4][1 + i] = 1;
		fofiMapAry[99 - 10 * 4][1 + i] = 1;
	}


	for (i = 11; i < 100 - 10; i++) {
		fofiMapAry[i][1 + 5] = 1;
		fofiMapAry[i][50 - 5] = 1;
	}
	for (i = 10 + 11; i < 100 - 2 * 10; i++) {
		fofiMapAry[i][1 + 5 * 2] = 1;
		fofiMapAry[i][50 - 5 * 2] = 1;
	}
	for (i = 2 * 10 + 11; i < 100 - 3 * 10; i++) {
		fofiMapAry[i][2 + 5 * 3] = 1;
		fofiMapAry[i][49 - 5 * 3] = 1;
	}
	for (i = 3 * 10 + 11; i < 100 - 4 * 10; i++) {
		fofiMapAry[i][2 + 5 * 4] = 1;
	}


	for (i = 3 * 10 + 11; i < 100 - 4 * 10; i++) {
		fofiMapAry[i][2 + 5 * 3] = 0;
	}
	for (i = 5 + 6 * 2 + 3; i < 50 - (5 + 6 * 2 + 3); i++) {
		fofiMapAry[1 + 10 * 2][1 + i] = 0;
		fofiMapAry[99 - 10][1 + i] = 0;
	}

}

void Stage::showMap(int stageNum)
{
	int ary[100][50];
	int i, j, x, y;

	for (i = 0; i < 100; i++) {
		for (j = 0; j < 50; j++) {
			ary[i][j] = (allMap[stageNum])[i][j];
		}
	}

	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 50; j++)
		{
			if (ary[i][j] == 1)
			{
				gotoXY(i, j);
				cout << "o";
			}
		}
	}

}
int(*Stage::getallMap())[100][50]
{
	return this->allMap;
}
void Stage::gotoXY(int x, int y)
{

	COORD Pos = { x + 55, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}