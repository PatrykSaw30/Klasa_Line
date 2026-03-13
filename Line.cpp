#include "Line.h"
#include <cmath>

Line::Line() {
    p1 = Point(0,0);
    p2 = Point(0,0);
}

Line::Line(Point a, Point b) {
    p1 = a;
    p2 = b;
}

void Line::setPoints(Point a, Point b) {
    p1 = a;
    p2 = b;
}

double Line::length() {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();

    return sqrt(dx*dx + dy*dy);
}
