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
#include <memory>

typedef std::shared_ptr<IDisplayStrategy> SharedPtrDis;
typedef std::shared_ptr<IRunStrategy>     SharedPtrRun;
typedef std::shared_ptr<IWuffStrategy>    SharedPtrWuff;

int main()
{

    enum class dis_type {
        home = 0,
        city = 1,
        wild = 2,
        rubb = 3
    };

    std::vector<SharedPtrDis> display_strategies;
    display_strategies.push_back(SharedPtrDis(new HomeDisplayStrategy()));
    display_strategies.push_back(SharedPtrDis(new CityDisplayStrategy()));
    display_strategies.push_back(SharedPtrDis(new WildDisplayStrategy()));
    display_strategies.push_back(SharedPtrDis(new RubberDisplayStrategy()));
//----------------------------------------------------

    enum class run_type {
        home = 0,
        base = 1,
        no   = 2
    };

    std::vector<SharedPtrRun> run_strategies;
    run_strategies.push_back(SharedPtrRun(new HomeRunStrategy()));
    run_strategies.push_back(SharedPtrRun(new BaseRunStrategy()));
    run_strategies.push_back(SharedPtrRun(new NoRunStrategy()));
//----------------------------------------------------

    enum class wuff_type {
        base = 0,
        wild = 1,
        rubb = 2
    };

    std::vector<SharedPtrWuff> wuff_strategies;
    wuff_strategies.push_back(SharedPtrWuff(new BaseWuffStrategy()));
    wuff_strategies.push_back(SharedPtrWuff(new WildWuffStrategy()));
    wuff_strategies.push_back(SharedPtrWuff(new RubberWuffStrategy()));
//----------------------------------------------------

    std::vector<Dog> dogs;
    dogs.push_back( // homeDog
        Dog(
            run_strategies    [static_cast<size_t>(run_type::home)],
            wuff_strategies   [static_cast<size_t>(wuff_type::base)],
            display_strategies[static_cast<size_t>(dis_type::home)]
            )
     ); // homeDog

    dogs.push_back( // cityDog
        Dog(
            run_strategies    [static_cast<size_t>(run_type::base)],
            wuff_strategies   [static_cast<size_t>(wuff_type::base)],
            display_strategies[static_cast<size_t>(dis_type::city)]
            )
     ); // cityDog

    dogs.push_back( // wildDog
        Dog(
            run_strategies    [static_cast<size_t>(run_type::base)],
            wuff_strategies   [static_cast<size_t>(wuff_type::wild)],
            display_strategies[static_cast<size_t>(dis_type::wild)]
            )
     ); // wildDog

    dogs.push_back( // rubberDog
        Dog(
            run_strategies    [static_cast<size_t>(run_type::no)],
            wuff_strategies   [static_cast<size_t>(wuff_type::rubb)],
            display_strategies[static_cast<size_t>(dis_type::rubb)]
            )
     ); // rubberDog
//----------------------------------------------------

	for (auto it = dogs.begin(); it != dogs.end(); ++it) {
        std::cout << "New dog: \n";
        std::cout << "  ";
		it->run();
        std::cout << "  ";
        it->wuff();
        std::cout << "  ";
        it->display();
        std::cout << "End dog \n\n";
	}


    std::cout << "\n\n";


    return 0;
}
