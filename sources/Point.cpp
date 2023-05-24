#include "Point.hpp"

namespace ariel {

    Point::Point(double x, double y) : _x(x), _y(y){}
    Point::Point(){}

    // print: Point: (x, y)
    void Point::print(){
        std::cout << "Point: (" << this->_x << ", " << this->_y << ")" << std::endl;
    }

    double Point::distance(const Point& point){
        double subX = point._x - this->_x;
        double subY = point._y - this->_y;

        double sum =  (subX * subX) + (subY * subY);

        return sqrt(sum);
    }

    Point Point::moveTowards(const Point& src, const Point& dst, double dist){

        double dx = dst._x - src._x;
        double dy = dst._y - src._y;
        double currDist = (dx * dx) + (dy * dy);

        if(currDist <= dist){
            return dst;
        }

        double scalingFactor = dist / currDist;

        double newX = (src._x + dx) * (scalingFactor);
        double newY = (src._y + dy) * (scalingFactor);

        Point closestP;
        closestP._x = newX;
        closestP._y = newY;

        return closestP;
    }

}