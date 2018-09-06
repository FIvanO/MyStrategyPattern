#include "basewuffstrategy.h"
#include <iostream>

using std::cout;
using std::endl;

void BaseWuffStrategy::wuff() {
    cout << "Base wuff" << endl;
}

BaseWuffStrategy::~BaseWuffStrategy()
{
    cout << __PRETTY_FUNCTION__ << endl;
}
