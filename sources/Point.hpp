#pragma once 
#include <iostream>
#include <cmath>


namespace ariel{


    class Point{

        private:

        double _x;
        double _y;

        
        public:

        Point();
        Point(double x, double y);

        double distance(const Point& point);
        void print();

        static Point moveTowards(const Point& src, const Point& dst, double dist);


        double getX(){
            return this->_x;
        }

        double getY(){
            return this->_y;
        }
        
    };
}