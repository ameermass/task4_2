#pragma once 
#include <iostream>
#include <cmath>

#include "Point.hpp"
using namespace std;


namespace ariel{


    class Character{

        private:
        string name;
        Point point;
        int lifeSpan;

        public:

        Character(string name,const Point& point);
        Character();

        bool isAlive();
        string print();
        double distance(Character*) ;
        void hit(int hitNUm);
        void move(Character* character);
        void slash(Character* character);





        int getLifeSpan(){
            return this->lifeSpan;
        }

        void setLifeSpan(int num){
            this->lifeSpan -= num;
        }

        string getName(){
            return this->name;
        }

        Point getLocation(){
            return this->point;
        }


    };
}