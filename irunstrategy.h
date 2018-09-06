#ifndef IRUNSTRATEGY_H
#define IRUNSTRATEGY_H

class IRunStrategy
{
public:
    virtual void run() = 0;
	virtual ~IRunStrategy() {}
};

#endif // IRUNSTRATEGY_H
