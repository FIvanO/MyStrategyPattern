#ifndef IDISPLAYSTRATEGY_H
#define IDISPLAYSTRATEGY_H

class IDisplayStrategy
{
public:
    virtual void display() = 0;
	virtual ~IDisplayStrategy() {}
};

#endif // IDISPLAYSTRATEGY_H
