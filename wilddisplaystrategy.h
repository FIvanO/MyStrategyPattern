#ifndef WILDDISPLAYSTRATEGY_H
#define WILDDISPLAYSTRATEGY_H

#include "idisplaystrategy.h"

class WildDisplayStrategy : public IDisplayStrategy
{
public:
	WildDisplayStrategy() {}
	void display();
    ~WildDisplayStrategy();
};

#endif // WILDDISPLAYSTRATEGY_H
