#include "textdisplaystrategy.h"
#include <iostream>

using std::cout;
using std::endl;

void TextDisplayStrategy::display() {
    cout << "Display dog as text" << endl;
}

TextDisplayStrategy::~TextDisplayStrategy()
{
    cout << __PRETTY_FUNCTION__ << endl;
}
