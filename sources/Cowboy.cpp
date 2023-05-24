#include "Cowboy.hpp"


namespace ariel{

    Cowboy::Cowboy(string name, Point point){}


    void Cowboy::shoot(Character* ninja){}

    bool Cowboy::hasboolets(){
        if(this->getBull() > 0){
            return true;
        }

        return false;
    }
}