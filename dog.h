#ifndef DOG_H
#define DOG_H

#include "irunstrategy.h"
#include "iwuffstrategy.h"
#include "idisplaystrategy.h"

class Dog
{
public:
	Dog(IRunStrategy *_rs, IWuffStrategy *_ws, IDisplayStrategy *_ds);
	void run();
	void wuff();
	void display();
	~Dog();
private:
	IRunStrategy *rs;
	IWuffStrategy *ws;
	IDisplayStrategy *ds;
};

#endif // DOG_H
