#include <iostream>
#include "Line.h"

using namespace std;

int main()
{

    Point a(1,2);
    Point b(4,6);

    Line *line1 = new Line(a,b);
    Line *line2 = new Line(Point(2,3), Point(5,7));

    cout << "Dlugosc pierwszej linii: " << line1->length() << endl;

    delete line1;

    cout << "Dlugosc drugiej linii: " << line2->length() << endl;

    return 0;
}
