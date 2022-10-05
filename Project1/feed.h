#pragma once
#include "point.h"
class Feed
{
private:
	Point feed;
	int feedIsTrue;
	int imax;

public:
	Feed() :feed(), feedIsTrue(0), imax(1) {};
	void showFeed();
	int getFeedIsTrue();
	void setFeedIsTrue(int num);
	int getMax();
	void setMax(int num);
	Point& getFeed();

};

