#ifndef DOG_H
#define DOG_H

#include "irunstrategy.h"
#include "iwuffstrategy.h"
#include "idisplaystrategy.h"
#include <memory>

class Dog
{
public:
    Dog(std::shared_ptr<IRunStrategy> _rs, std::shared_ptr<IWuffStrategy> _ws, std::shared_ptr<IDisplayStrategy> _ds);
    void run();
    void wuff();
    void display();
    ~Dog();
private:
    std::shared_ptr<IRunStrategy>     run_st;
    std::shared_ptr<IWuffStrategy>    wuff_st;
    std::shared_ptr<IDisplayStrategy> dis_st;
};

#endif // DOG_H
