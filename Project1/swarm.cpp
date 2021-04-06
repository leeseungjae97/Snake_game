#include "swarm.h";

Swarm::Swarm() : startPoint(40 + 55, 20), section(3)
{

	memset(swarm, 0, sizeof(swarm));
	for (size_t i = 0; i < this->section; i++)
	{
		this->swarm[i].init(startPoint.getX(), startPoint.getY() + i);
		this->swarm[i].setStart(1);
		this->swarm[i].setDead(1 + 1);
	}
	this->way = 'w';
}

void Swarm::show(int i)
{

	for (size_t j = 0; j < section; j++)
	{
		if (swarm[j].getDead() == i)
		{

			swarm[j].gotoXY();
			Point::textcolor(BLACK, BLACK);
			swarm[j].put_char('o');
			swarm[j].setDead(i + 1);

			if (j == section - 1)
			{

				this->vector.init(swarm[0].getX() - swarm[1].getX(), swarm[0].getY() - swarm[1].getY());
				for (size_t i = this->section - 1; i > 0; i--)
				{
					swarm[i].setX(swarm[i - 1].getX());
					swarm[i].setY(swarm[i - 1].getY());
				}
				if (this->way == 'w')
				{
					vector.init(0, -1);
				}
				if (this->way == 's')
				{
					vector.init(0, 1);

				}
				if (this->way == 'a')
				{
					vector.init(-1, 0);

				}
				if (this->way == 'd')
				{
					vector.init(1, 0);

				}
				swarm[0].setX(swarm[1].getX() + vector.getX());
				swarm[0].setY(swarm[1].getY() + vector.getY());
			}

		}

	}
	for (size_t j = 0; j < this->section; j++)
	{
		if (swarm[j].getStart() == i)
		{

			swarm[j].gotoXY();
			Point::textcolor(RED, BLACK);
			swarm[j].put_char('o');
			swarm[j].setStart(i + 1);


		}
	}

}
void Swarm::addTail(int i)
{
	Point vector2;
	vector2.init(swarm[section - 1].getX() - swarm[section - 2].getX(), swarm[section - 1].getY() - swarm[section - 2].getY());
	swarm[section].setX(swarm[section - 1].getX() + vector2.getX());
	swarm[section].setY(swarm[section - 1].getY() + vector2.getY());
	this->swarm[section].setStart(i + 1);
	this->swarm[section].setDead(i + 2);
	section++;

}
void Swarm::deleteTail(int i)
{
	swarm[section - 1].gotoXY();
	Point::textcolor(BLACK, BLACK);
	swarm[section - 1].put_char('o');
	section--;



}
Point* Swarm::getSwarm()
{

	return this->swarm;
}
int Swarm::getSection()
{

	return this->section;

}
void Swarm::setSection(int section)
{
	this->section = section;
}
int Swarm::getWay()
{
	return this->way;
}
void Swarm::setWay(char a)
{
	this->way = a;
}

