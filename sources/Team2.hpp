#include "iostream"

#include "Character.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "Ninja.hpp"

using namespace std;

namespace ariel{


    class Team2{

        private:


        public:

        Team2(Character*);

        int stillAlive();
        void add(Character*);
        void attack(Team2*);
    };
}