#ifndef BASEWUFFSTRATEGY_H
#define BASEWUFFSTRATEGY_H

#include "iwuffstrategy.h"

class BaseWuffStrategy : public IWuffStrategy
{
public:
	BaseWuffStrategy() {}
	void wuff();
};

#endif // BASEWUFFSTRATEGY_H
