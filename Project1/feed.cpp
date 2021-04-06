#include"feed.h"
int Feed::getFeedIsTrue()
{
	return this->feedIsTrue;
}
void Feed::setFeedIsTrue(int num)
{
	this->feedIsTrue = num;
}
Point& Feed::getFeed()
{
	return this->feed;
}
void Feed::setMax(int num)
{
	this->imax = num;
}

int Feed::getMax()
{
	return this->imax;
}

void Feed::showFeed()
{
	if (this->feedIsTrue == 1)
	{
		feed.gotoXY();
		Point::textcolor(rand() % 15 + 1, BLACK);
		feed.put_char('*');
	}

}
