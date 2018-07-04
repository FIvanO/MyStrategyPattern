#include "dog.h"

Dog::Dog(IRunStrategy *_rs, IWuffStrategy *_ws, IDisplayStrategy *_ds) : rs(_rs), ws(_ws), ds(_ds)
{
}

void Dog::run() {
	rs->run();
}

void Dog::wuff() {
	ws->wuff();
}

void Dog::display() {
	ds->display();
}

Dog::~Dog() {
	delete rs;
	delete ws;
	delete ds;
}

