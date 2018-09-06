#include "homerunstrategy.h"
#include <iostream>

using std::cout;
using std::endl;

void HomeRunStrategy::run() {
    cout << "Home run" << endl;
}

HomeRunStrategy::~HomeRunStrategy()
{
    cout << __PRETTY_FUNCTION__ << endl;
}
