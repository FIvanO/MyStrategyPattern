#include "baserunstrategy.h"
#include <iostream>

void BaseRunStrategy::run() {
    std::cout << "Base run" << std::endl;
}

BaseRunStrategy::~BaseRunStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << "\n" << std::endl;
}
