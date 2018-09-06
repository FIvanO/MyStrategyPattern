#include "wildwuffstrategy.h"
#include <iostream>

using std::cout;
using std::endl;

void WildWuffStrategy::wuff() {
    cout << "Wild wuff" << endl;
}

WildWuffStrategy::~WildWuffStrategy()
{
    cout << __PRETTY_FUNCTION__ << endl;
}
