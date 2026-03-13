#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(double x, double y) {
    if(x >= 0 && y >= 0) {
        this->x = x;
        this->y = y;
    } else {
        this->x = 0;
        this->y = 0;
    }
}

void Point::setX(double x) {
    if(x >= 0)
        this->x = x;
}

void Point::setY(double y) {
    if(y >= 0)
        this->y = y;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}
