#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <istream>
#include <windows.h>
#include <iomanip>

using namespace std;

class Ranking
{
private:

	pair <string, double > p[100];
	int ranker;
public:

	void searchPlayerName(const string& r);
	void getPlayerNameTwty();
	void enterPlayer(const string& r, const double time);
};