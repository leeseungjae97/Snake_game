#pragma once
#include "point.h"
class Item
{
private:
	Point itemList[100];  //¦������ �������� ������ Ȧ������ �����ִ� ������ �����Ұ���

public:
	Item();
	void showitem(int i);
	Point* getitem();

};
