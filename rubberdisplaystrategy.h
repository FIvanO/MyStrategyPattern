#ifndef RUBBERDISPLAYSTRATEGY_H
#define RUBBERDISPLAYSTRATEGY_H

#include "idisplaystrategy.h"

class RubberDisplayStrategy : public IDisplayStrategy
{
public:
	RubberDisplayStrategy() {}
	void display();
    ~RubberDisplayStrategy();
};

#endif // RUBBERDISPLAYSTRATEGY_H
