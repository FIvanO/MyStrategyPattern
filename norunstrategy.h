#ifndef NORUNSTRATEGY_H
#define NORUNSTRATEGY_H

#include "irunstrategy.h"

class NoRunStrategy : public IRunStrategy
{
public:
	void run();
    ~NoRunStrategy();
};

#endif // NORUNSTRATEGY_H
