#ifndef WILDDISPLAYSTRATEGY_H
#define WILDDISPLAYSTRATEGY_H

#include "idisplaystrategy.h"

class TextDisplayStrategy : public IDisplayStrategy
{
public:
    TextDisplayStrategy() {}
	void display();
    ~TextDisplayStrategy();
};

#endif // WILDDISPLAYSTRATEGY_H
