#include "norunstrategy.h"
#include <iostream>

using std::cout;
using std::endl;

void NoRunStrategy::run() {
    cout << "No run" << endl;
}

NoRunStrategy::~NoRunStrategy()
{
    cout << __PRETTY_FUNCTION__ << endl;
}
