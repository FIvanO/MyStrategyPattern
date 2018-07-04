#ifndef IDISPLAYSTRATEGY_H
#define IDISPLAYSTRATEGY_H

class IDisplayStrategy
{
public:
	IDisplayStrategy() {}
	virtual void display() {}
	virtual ~IDisplayStrategy() {}
};

#endif // IDISPLAYSTRATEGY_H
