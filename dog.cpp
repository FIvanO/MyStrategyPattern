#include "dog.h"
#include <iostream>

using std::cout;
using std::endl;

Dog::Dog(
    shared_ptr<IRunStrategy>     _run_strategy,
    shared_ptr<IWuffStrategy>    _wuff_strategy,
    shared_ptr<IDisplayStrategy> _display_strategy
)
:
    run_strategy(_run_strategy),
    wuff_strategy(_wuff_strategy),
    display_strategy(_display_strategy)
{
}

void Dog::run() {
    run_strategy->run();
}

void Dog::wuff() {
    wuff_strategy->wuff();
}

void Dog::display() {
    display_strategy->display();
}

Dog::~Dog() {
    cout << "\n" << __PRETTY_FUNCTION__ << endl;
}

