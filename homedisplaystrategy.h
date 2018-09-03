#ifndef HOMEDISPLAYSTRATEGY_H
#define HOMEDISPLAYSTRATEGY_H

#include "idisplaystrategy.h"

class HomeDisplayStrategy : public IDisplayStrategy
{
public:
	HomeDisplayStrategy() {}
	void display();
    ~HomeDisplayStrategy();
};

#endif // HOMEDISPLAYSTRATEGY_H
