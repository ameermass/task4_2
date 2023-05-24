#include "iostream"

#include "Character.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "Ninja.hpp"

using namespace std;

namespace ariel{


    class Team{

        private:


        public:

        Team(Character*);

        void add(Character*);
        int stillAlive();
        void attack(Team*);
        void print();
    };
}