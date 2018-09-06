#include "rubberwuffstrategy.h"
#include <iostream>

using std::cout;
using std::endl;

void RubberWuffStrategy::wuff() {
    cout << "Rubber wuff" << endl;
}

RubberWuffStrategy::~RubberWuffStrategy()
{
    cout << __PRETTY_FUNCTION__ << endl;
}
