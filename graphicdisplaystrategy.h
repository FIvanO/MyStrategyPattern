#ifndef GRAPHICDISPLAYSTRATEGY_H
#define GRAPHICDISPLAYSTRATEGY_H

#include "idisplaystrategy.h"

class GraphicDisplayStrategy : public IDisplayStrategy
{
public:
	void display();
    ~GraphicDisplayStrategy();
};

#endif // GRAPHICDISPLAYSTRATEGY_H
