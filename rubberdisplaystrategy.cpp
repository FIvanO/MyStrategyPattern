#include "rubberdisplaystrategy.h"
#include <iostream>

void RubberDisplayStrategy::display() {
    std::cout << "I'm rubber dog" << std::endl;
}

RubberDisplayStrategy::~RubberDisplayStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << "\n" << std::endl;
}
