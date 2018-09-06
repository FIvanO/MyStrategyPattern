#ifndef DOG_H
#define DOG_H

#include "irunstrategy.h"
#include "iwuffstrategy.h"
#include "idisplaystrategy.h"
#include <memory>

class Dog
{
public:
    Dog(
        std::shared_ptr<IRunStrategy>     _run_strategy,
        std::shared_ptr<IWuffStrategy>    _wuff_strategy,
        std::shared_ptr<IDisplayStrategy> _display_strategy
    );
    void run();
    void wuff();
    void display();
    ~Dog();
private:
    std::shared_ptr<IRunStrategy>     run_strategy;
    std::shared_ptr<IWuffStrategy>    wuff_strategy;
    std::shared_ptr<IDisplayStrategy> display_strategy;
};

#endif // DOG_H
