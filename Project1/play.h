#pragma once
#include"swarm.h"
#include"stage.h"
#include <time.h>
#include <conio.h>
#include"feed.h"
#include"item.h"
class Play
{
private:
	Swarm actor;
	Stage map;
	int level;
	int sleep;
	Feed food;
	Item items;


public:

	enum { EMPTY, OBSTACLE, FEED, ITEM1, ITEM2, SUCESS };
	Play();
	void show(int i);
	int clash(int i);
	void wait();
	void readyForStage(int i);
	void setLevel(int level);
	void setSleep(int sleep);
};
Play::Play()
{
	this->level = 0;
	this->sleep = 100;
}

void Play::show(int i)
{
	char a;
	if (kbhit())
	{

		a = getch();
		if (a == 'w' && actor.getWay() == 's' || a == 's' && actor.getWay() == 'w' || a == 'a' && actor.getWay() == 'd' || a == 'd' && actor.getWay() == 'a');
		else
			actor.setWay(a);

	}

	if (i == 1)
	{
		Point::textcolor(WHITE, BLACK);
		map.showMap(level);
	}
	food.showFeed();
	items.showitem(i);
	actor.show(i);


}
int Play::clash(int i)
{
	for (size_t i = 1; i < actor.getSection(); i++)
	{
		if ((actor.getSwarm()[0].getX() == actor.getSwarm()[i].getX() && actor.getSwarm()[0].getY() == actor.getSwarm()[i].getY()))
			return OBSTACLE;
	}
	if (map.getallMap()[level][actor.getSwarm()[0].getX()][actor.getSwarm()[0].getY()] == 1)
		return OBSTACLE;

	if (actor.getSwarm()[0].getX() == food.getFeed().getX() && actor.getSwarm()[0].getY() == food.getFeed().getY())
	{
		actor.addTail(i);
		food.setFeedIsTrue(0);
		food.setMax(food.getMax() - 1);

		return FEED;
	}
	for (size_t i = 0; i < 100; i++)
	{
		if (actor.getSwarm()[0].getX() == items.getitem()[i].getX() && actor.getSwarm()[0].getY() == items.getitem()[i].getY())
		{
			if (i % 2 == 0)
				this->sleep += 20;                   //아이템 먹었을때 속조 조정
			else
			{
				if (actor.getSection() != 2)
					actor.deleteTail(i);                     //아이템 먹었을때 꼬리 자르기
			}

			items.getitem()[i].init(-1, -1);

			return FEED;

		}

	}

	if (food.getMax() == 0)
		return SUCESS;
	return EMPTY;
}
void Play::wait()
{
	Sleep(this->sleep);
}
void Play::readyForStage(int i)
{
	int j;
	while (!food.getFeedIsTrue())
	{
		food.getFeed().init(rand() % 100, rand() % 50);

		for (j = 0; j < actor.getSection(); j++)
		{
			if (actor.getSwarm()[j].getX() == food.getFeed().getX() && actor.getSwarm()[j].getY() == food.getFeed().getY())
				break;

		}

		if (j != actor.getSection())
			continue;
		if (map.getallMap()[level][food.getFeed().getX()][food.getFeed().getY()] == 1)
			continue;

		food.setFeedIsTrue(1);

	}


	while (1)
	{
		int k;
		for (k = 0; k < 100; k++)
		{
			if (items.getitem()[k].getStart() == i + 1)
				break;

		}
		if (k == 100)
			break;

		items.getitem()[k].init(rand() % 100, rand() % 50);

		for (j = 0; j < actor.getSection(); j++)
		{
			if (actor.getSwarm()[j].getX() == items.getitem()[k].getX() && actor.getSwarm()[j].getY() == items.getitem()[k].getY())
				break;

		}

		if (j != actor.getSection())
			continue;
		if (map.getallMap()[level][items.getitem()[k].getX()][items.getitem()[k].getY()] == 1)
			continue;
		if (food.getFeed().getX() == items.getitem()[k].getX() && food.getFeed().getY() == items.getitem()[k].getY())
			continue;
		break;
	}

	if (i % 100 == 0)
		this->sleep -= 5;                         //게임진행에 따른 지렁이 속도
}
void Play::setLevel(int level)
{

	this->level = level;
	this->sleep -= 20 + level;                 //레벨에 따른 지렁이 속도    

	switch (level)                            ///레벨에 따른 먹이갯수
	{
	case 1:this->food.setMax(10); break;
	case 2:this->food.setMax(15); break;
	case 3:this->food.setMax(20); break;
	case 4:this->food.setMax(25); break;
	case 5:this->food.setMax(25); break;

	}

}
void Play::setSleep(int level)
{
	this->level = level;
}
