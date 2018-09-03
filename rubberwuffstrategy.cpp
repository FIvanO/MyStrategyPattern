#include "rubberwuffstrategy.h"
#include <iostream>

void RubberWuffStrategy::wuff() {
    std::cout << "Rubber wuff" << std::endl;
}

RubberWuffStrategy::~RubberWuffStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << "\n" << std::endl;
}
