#ifndef BASERUNSTRATEGY_H
#define BASERUNSTRATEGY_H

#include "irunstrategy.h"

class BaseRunStrategy : public IRunStrategy
{
public:
	BaseRunStrategy() {}
	void run();
    ~BaseRunStrategy();
};

#endif // BASERUNSTRATEGY_H
