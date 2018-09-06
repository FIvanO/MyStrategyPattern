#ifndef DOG_H
#define DOG_H

#include "irunstrategy.h"
#include "iwuffstrategy.h"
#include "idisplaystrategy.h"
#include <memory>

using std::shared_ptr;

class Dog
{
public:
    Dog(
        shared_ptr<IRunStrategy>     _run_strategy,
        shared_ptr<IWuffStrategy>    _wuff_strategy,
        shared_ptr<IDisplayStrategy> _display_strategy
    );
    void run();
    void wuff();
    void display();
    ~Dog();
private:
    shared_ptr<IRunStrategy>     run_strategy;
    shared_ptr<IWuffStrategy>    wuff_strategy;
    shared_ptr<IDisplayStrategy> display_strategy;
};

#endif // DOG_H
