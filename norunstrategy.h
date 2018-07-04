#ifndef NORUNSTRATEGY_H
#define NORUNSTRATEGY_H

#include "irunstrategy.h"

class NoRunStrategy : public IRunStrategy
{
public:
	NoRunStrategy() {}
	void run();
};

#endif // NORUNSTRATEGY_H
