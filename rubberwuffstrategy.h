#ifndef RUBBERWUFFSTRATEGY_H
#define RUBBERWUFFSTRATEGY_H

#include "iwuffstrategy.h"

class RubberWuffStrategy : public IWuffStrategy
{
public:
	RubberWuffStrategy() {}
	void wuff();
    ~RubberWuffStrategy();
};

#endif // RUBBERWUFFSTRATEGY_H
