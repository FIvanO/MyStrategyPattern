#include <iostream>
#include "dog.h"
#include "homerunstrategy.h"
#include "norunstrategy.h"
#include "baserunstrategy.h"
#include "rubberwuffstrategy.h"
#include "wildwuffstrategy.h"
#include "basewuffstrategy.h"
#include "rubberdisplaystrategy.h"
#include "wilddisplaystrategy.h"
#include "citydisplaystrategy.h"
#include "homedisplaystrategy.h"
#include <vector>

int main()
{
	std::vector <Dog> dogs;
	dogs.push_back(Dog(new HomeRunStrategy(), new BaseWuffStrategy(), new HomeDisplayStrategy())); // homeDog
	dogs.push_back(Dog(new BaseRunStrategy(), new BaseWuffStrategy(), new CityDisplayStrategy())); // cityDog
	dogs.push_back(Dog(new BaseRunStrategy(), new WildWuffStrategy(), new WildDisplayStrategy())); // wildDog
	dogs.push_back(Dog(new NoRunStrategy(), new RubberWuffStrategy(), new RubberDisplayStrategy())); // rubberDog

	for (auto it = dogs.begin(); it != dogs.end(); ++it) {
		it->run();
		it->wuff();
		it->display();
	}


	return 0;
}
