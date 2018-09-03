#ifndef CITYDISPLAYSTRATEGY_H
#define CITYDISPLAYSTRATEGY_H

#include "idisplaystrategy.h"

class CityDisplayStrategy : public IDisplayStrategy
{
public:
	CityDisplayStrategy() {}
	void display();
    ~CityDisplayStrategy();
};

#endif // CITYDISPLAYSTRATEGY_H
