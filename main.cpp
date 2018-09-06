#include <iostream>
#include "dog.h"
#include "homerunstrategy.h"
#include "norunstrategy.h"
#include "baserunstrategy.h"
#include "rubberwuffstrategy.h"
#include "wildwuffstrategy.h"
#include "basewuffstrategy.h"
#include "graphicdisplaystrategy.h"
#include "textdisplaystrategy.h"
#include "enums.h"
#include <vector>
#include <memory>
#include <ctime>

typedef shared_ptr<IDisplayStrategy> SharedPtrDis;
typedef shared_ptr<IRunStrategy>     SharedPtrRun;
typedef shared_ptr<IWuffStrategy>    SharedPtrWuff;

using std::cout;
using std::endl;
using std::vector;

int main()
{

    vector<SharedPtrDis> display_strategies;
    display_strategies.push_back(SharedPtrDis(new TextDisplayStrategy()));
    display_strategies.push_back(SharedPtrDis(new GraphicDisplayStrategy()));

    vector<SharedPtrRun> run_strategies;
    run_strategies.push_back(SharedPtrRun(new HomeRunStrategy()));
    run_strategies.push_back(SharedPtrRun(new BaseRunStrategy()));
    run_strategies.push_back(SharedPtrRun(new NoRunStrategy()));

    vector<SharedPtrWuff> wuff_strategies;
    wuff_strategies.push_back(SharedPtrWuff(new BaseWuffStrategy()));
    wuff_strategies.push_back(SharedPtrWuff(new WildWuffStrategy()));
    wuff_strategies.push_back(SharedPtrWuff(new RubberWuffStrategy()));

//----------------------------------------------------

    vector<shared_ptr<Dog>> dogs;
    dogs.push_back( // homeDog
        shared_ptr<Dog>(
            new Dog(
                run_strategies    [static_cast<size_t>(run_type::home)],
                wuff_strategies   [static_cast<size_t>(wuff_type::base)],
                display_strategies[static_cast<size_t>(display_type::text)]
            )
        )
    ); // homeDog

    dogs.push_back( // cityDog
        shared_ptr<Dog>(
            new Dog(
                run_strategies    [static_cast<size_t>(run_type::base)],
                wuff_strategies   [static_cast<size_t>(wuff_type::base)],
                display_strategies[static_cast<size_t>(display_type::graphic)]
            )
        )
    ); // cityDog

    dogs.push_back( // wildDog
        shared_ptr<Dog>(
            new Dog(
                run_strategies    [static_cast<size_t>(run_type::base)],
                wuff_strategies   [static_cast<size_t>(wuff_type::wild)],
                display_strategies[static_cast<size_t>(display_type::text)]
            )
        )
    ); // wildDog

    dogs.push_back( // rubberDog
        shared_ptr<Dog>(
            new Dog(
                run_strategies    [static_cast<size_t>(run_type::no_run)],
                wuff_strategies   [static_cast<size_t>(wuff_type::rubber)],
                display_strategies[static_cast<size_t>(display_type::graphic)]
            )
        )
    ); // rubberDog


    srand(time(nullptr));
    dogs.push_back( // randomDog 1
        shared_ptr<Dog>(
            new Dog(
                run_strategies    [static_cast<size_t>(rand() % 3)],
                wuff_strategies   [static_cast<size_t>(rand() % 3)],
                display_strategies[static_cast<size_t>(rand() % 2)]
            )
        )
    ); // randomDog 1

    dogs.push_back( // randomDog 2
        shared_ptr<Dog>(
            new Dog(
                run_strategies    [static_cast<size_t>(rand() % 3)],
                wuff_strategies   [static_cast<size_t>(rand() % 3)],
                display_strategies[static_cast<size_t>(rand() % 2)]
            )
        )
    ); // randomDog 2
//----------------------------------------------------


	for (auto it = dogs.begin(); it != dogs.end(); ++it) {
        cout << "New dog: \n";
        cout << "  ";
		(*it)->run();
        cout << "  ";
        (*it)->wuff();
        cout << "  ";
        (*it)->display();
        cout << "End dog \n\n\n";
    }


    run_strategies.clear();
    wuff_strategies.clear();
    display_strategies.clear();
    dogs.clear();


    return 0;
}
