#include "wilddisplaystrategy.h"
#include <iostream>

void WildDisplayStrategy::display() {
    std::cout << "I'm wild dog" << std::endl;
}

WildDisplayStrategy::~WildDisplayStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << "\n" << std::endl;
}
