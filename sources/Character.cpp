#include "Character.hpp"
using namespace std;

namespace ariel {

    Character::Character(string name,const Point& point) : name(name), point(point) {};
    Character::Character(){};

    bool Character::isAlive(){
        if(this->getLifeSpan() > 0){
            return true;
        }

        return false;
    }

    double Character::distance(Character* character){

        double subX = this->point.getX() - character->point.getY();
        double subY = this->point.getX() - character->point.getY();

        double sum =  (subX * subX) + (subY * subY);

        return sqrt(sum);
    }

    void Character::hit(int hitNUm){
        this->setLifeSpan(hitNUm);
    }

    string Character::print(){
        return "";
    }
}