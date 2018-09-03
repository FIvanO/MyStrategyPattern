#include "citydisplaystrategy.h"
#include "iostream"

void CityDisplayStrategy::display() {
    std::cout << "I'm city dog" << std::endl;
}

CityDisplayStrategy::~CityDisplayStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << "\n" << std::endl;
}
