#ifndef BASERUNSTRATEGY_H
#define BASERUNSTRATEGY_H

#include "irunstrategy.h"

class BaseRunStrategy : public IRunStrategy
{
public:
	void run();
    ~BaseRunStrategy();
};

#endif // BASERUNSTRATEGY_H
