#ifndef HOMERUNSTRATEGY_H
#define HOMERUNSTRATEGY_H

#include "irunstrategy.h"

class HomeRunStrategy : public IRunStrategy
{
public:
	void run();
    ~HomeRunStrategy();
};

#endif // HOMERUNSTRATEGY_H
