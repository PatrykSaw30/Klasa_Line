#ifndef LINE_H
#define LINE_H

#include "Point.h"
#include <cmath>

class Line
{
private:
    Point p1;
    Point p2;

public:
    Line();
    Line(Point a, Point b);

    void setPoints(Point a, Point b);

    double length()
};

#endif

