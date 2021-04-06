#pragma once
#include "point.h"
#include <math.h>

class Swarm
{
private:
	Point startPoint;
	int section;
	Point swarm[100];
	Point vector;
	char way;



public:

	Swarm();
	void show(int i);
	Point* getSwarm();
	int getSection();
	void setSection(int section);
	int getWay();
	void setWay(char a);
	void addTail(int i);
	void deleteTail(int i);

};