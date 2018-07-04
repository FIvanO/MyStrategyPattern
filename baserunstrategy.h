#ifndef BASERUNSTRATEGY_H
#define BASERUNSTRATEGY_H

#include "irunstrategy.h"

class BaseRunStrategy : public IRunStrategy
{
public:
	BaseRunStrategy() {}
	void run();
};

#endif // BASERUNSTRATEGY_H
