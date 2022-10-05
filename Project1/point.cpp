#include "point.h"

Point::Point(int x, int y) : x(x), y(y) // 초기 값을 안 주면 그냥 0으로 위치 초기화
{}
void Point::gotoXY()
{


	COORD a = {};
	COORD Pos = { 55 + this->x, this->y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void Point::put_char(char ch)
{
	this->gotoXY();
	cout << ch;
}
void Point::init(int x, int y)
{
	this->x = x;
	this->y = y;
}
int Point::getStart()
{
	return this->start;
}
void Point::setStart(int start)
{
	this->start = start;
}
int Point::getDead()
{
	return this->dead;
}
void Point::setDead(int dead)
{
	this->dead = dead;
}
void Point::setX(int x)
{
	this->x = x;
}
int Point::getX()
{
	return this->x;

}
void Point::setY(int y)
{
	this->y = y;

}
int Point::getY()
{
	return this->y;

}