#pragma once

#include "Character.hpp"
using namespace std;

namespace ariel{

    class Ninja : public Character{

        public:

        int speed;
        int health;
        Ninja(string name,const Point& point);
        void slash(Character* character);
        void move(Character* otherCharacter);

        int getSpeed(){
            return this->speed;
        }

        int getHealth(){
            return this->health;
        }

        bool isAlive(){
            if (this->health > 0){
                return true;
            }
            return false;
        }

        string getName(){
            return "";
        }
        
    };
}