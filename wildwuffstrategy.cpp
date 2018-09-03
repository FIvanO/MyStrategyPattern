#include "wildwuffstrategy.h"
#include <iostream>

void WildWuffStrategy::wuff() {
    std::cout << "Wild wuff" << std::endl;
}

WildWuffStrategy::~WildWuffStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << "\n" << std::endl;
}
