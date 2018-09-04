#include "basewuffstrategy.h"
#include <iostream>

void BaseWuffStrategy::wuff() {
    std::cout << "Base wuff" << std::endl;
}

BaseWuffStrategy::~BaseWuffStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
