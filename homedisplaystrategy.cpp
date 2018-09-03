#include "homedisplaystrategy.h"
#include <iostream>

void HomeDisplayStrategy::display() {
    std::cout << "I'm home dog" << std::endl;
}

HomeDisplayStrategy::~HomeDisplayStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << "\n" << std::endl;
}
