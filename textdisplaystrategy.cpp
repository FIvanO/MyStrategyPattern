#include "textdisplaystrategy.h"
#include <iostream>

void TextDisplayStrategy::display() {
    std::cout << "Display dog as text" << std::endl;
}

TextDisplayStrategy::~TextDisplayStrategy()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
