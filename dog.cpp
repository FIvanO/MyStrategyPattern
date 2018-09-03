#include "dog.h"
#include <iostream>

Dog::Dog(
    std::shared_ptr<IRunStrategy>     _rs,
    std::shared_ptr<IWuffStrategy>    _ws,
    std::shared_ptr<IDisplayStrategy> _ds
)
:
  run_st(_rs),
  wuff_st(_ws),
  dis_st(_ds)
{
}

void Dog::run() {
    run_st->run();
}

void Dog::wuff() {
    wuff_st->wuff();
}

void Dog::display() {
    dis_st->display();
}

Dog::~Dog() {
    std::cout << __PRETTY_FUNCTION__ << "\n" << std::endl;
}

