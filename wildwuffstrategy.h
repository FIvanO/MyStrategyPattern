#ifndef WILDWUFFSTRATEGY_H
#define WILDWUFFSTRATEGY_H

#include "iwuffstrategy.h"

class WildWuffStrategy : public IWuffStrategy {
public:
	WildWuffStrategy() {}
	void wuff();
    ~WildWuffStrategy();
};

#endif // WILDWUFFSTRATEGY_H
