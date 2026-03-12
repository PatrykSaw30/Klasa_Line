#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double x;
    double y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }

    Point(double a, double b)
    {
        if(a >= 0 && b >= 0)
        {
            x = a;
            y = b;
        }
        else
        {
            x = 0;
            y = 0;
        }
    }

    void setX(double a)
    {
        if(a >= 0)
            x = a;
    }

    void setY(double b)
    {
        if(b >= 0)
            y = b;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }
};

#endif
