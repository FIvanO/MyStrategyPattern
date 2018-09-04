#include "homerunstrategy.h"
#include <iostream>

void HomeRunStrategy::run() {
    std::cout << "Home run" << std::endl;
}

HomeRunStrategy::~HomeRunStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
