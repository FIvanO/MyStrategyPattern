#ifndef BASEWUFFSTRATEGY_H
#define BASEWUFFSTRATEGY_H

#include "iwuffstrategy.h"

class BaseWuffStrategy : public IWuffStrategy
{
public:
	void wuff();
    ~BaseWuffStrategy();
};

#endif // BASEWUFFSTRATEGY_H
