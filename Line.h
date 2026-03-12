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
    Line()
    {
        p1 = Point(0,0);
        p2 = Point(0,0);
    }

    Line(Point a, Point b)
    {
        p1 = a;
        p2 = b;
    }

    void setPoints(Point a, Point b)
    {
        p1 = a;
        p2 = b;
    }

    double length()
    {
        double dx = p2.getX() - p1.getX();
        double dy = p2.getY() - p1.getY();

        return sqrt(dx*dx + dy*dy);
    }
};

#endif
