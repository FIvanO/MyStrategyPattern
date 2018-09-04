#include "norunstrategy.h"
#include <iostream>

void NoRunStrategy::run() {
    std::cout << "No run" << std::endl;
}

NoRunStrategy::~NoRunStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
