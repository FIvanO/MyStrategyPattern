#include "dog.h"

//Dog::Dog(IRunStrategy *_rs, IWuffStrategy *_ws, IDisplayStrategy *_ds) : rs(_rs), ws(_ws), ds(_ds)
//{
//}

Dog::Dog(
        std::shared_ptr<IRunStrategy> _rs,
        std::shared_ptr<IWuffStrategy> _ws,
        std::shared_ptr<IDisplayStrategy> _ds)
    : run_st(_rs), wuff_st(_ws), dis_st(_ds)
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
//	delete rs;
//	delete ws;
//    delete ds;
}

