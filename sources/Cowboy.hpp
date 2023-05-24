#pragma once 

#include "Character.hpp"
#include "iostream"
using namespace std;

namespace ariel{


    class Cowboy : public Character{

        private:
        string _name;
        Point _point;

        int bull;

        public:


        Cowboy(string name, Point point);

        void shoot(Character* ninja);


        bool hasboolets();

        int getBull(){
            return this->bull;
        }

        void reload(){
            this->bull += 6;
        }


    };
}