#pragma once
#include "point.h"
class Item
{
private:
	Point itemList[100];  //짝수에는 느려지는 아이템 홀수에는 갯수주는 아이템 저장할거임

public:
	Item();
	void showitem(int i);
	Point* getitem();

};
