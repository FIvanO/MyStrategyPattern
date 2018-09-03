#ifndef GRAPHICDISPLAYSTRATEGY_H
#define GRAPHICDISPLAYSTRATEGY_H

#include "idisplaystrategy.h"

class GraphicDisplayStrategy : public IDisplayStrategy
{
public:
    GraphicDisplayStrategy() {}
	void display();
    ~GraphicDisplayStrategy();
};

#endif // GRAPHICDISPLAYSTRATEGY_H
