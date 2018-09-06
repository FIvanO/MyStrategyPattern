#ifndef WILDDISPLAYSTRATEGY_H
#define WILDDISPLAYSTRATEGY_H

#include "idisplaystrategy.h"

class TextDisplayStrategy : public IDisplayStrategy
{
public:
	void display();
    ~TextDisplayStrategy();
};

#endif // WILDDISPLAYSTRATEGY_H
