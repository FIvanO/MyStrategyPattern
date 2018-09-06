#include "baserunstrategy.h"
#include <iostream>

using std::cout;
using std::endl;

void BaseRunStrategy::run() {
    cout << "Base run" << endl;
}

BaseRunStrategy::~BaseRunStrategy()
{
    cout << __PRETTY_FUNCTION__ << endl;
}
