#pragma once 

#include "iostream"

#include "Ninja.hpp"

using namespace std;

namespace ariel{


    class OldNinja : public Ninja{

        private:
        string _name;
        Point _point;

        public:


        OldNinja(string name,const Point& point);

        void move(Character* cowboy);
        void slash(Character* cowboy);

        ~OldNinja();
    };
}