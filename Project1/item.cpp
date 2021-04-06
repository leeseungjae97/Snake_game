#include "item.h"

Item::Item()
{
	for (size_t i = 0; i < 100; i++)
	{
		this->itemList[i].setStart(i * 100 + 50);
		this->itemList[i].setDead((i + 2) * 100);
	}
}


Point* Item::getitem()
{
	return this->itemList;
}

void Item::showitem(int i)
{
	for (size_t j = 0; j < 100; j++)
	{
		if (itemList[j].getStart() == i)
		{

			itemList[j].gotoXY();
			Point::textcolor(rand() % 15 + 1, BLACK);
			cout << j;

			if ((j + 1) % 2 == 0)
				itemList[j].put_char('D');
			else
				itemList[j].put_char('S');

		}
	}
	for (size_t j = 0; j < 100; j++)
	{
		if (itemList[j].getDead() == i)
		{

			itemList[j].gotoXY();
			Point::textcolor(BLACK, BLACK);
			cout << j;

			if ((j + 1) % 2 == 0)
				itemList[j].put_char('D');
			else
				itemList[j].put_char('S');


		}
	}


}
