#include <iostream>
using namespace std;

main()
{
    /* write a program that enter an integer h and the coordinates of a given point {x , y} and prints wheter the point
    inside the figure, outside the figure or any of the border of the figure */

    int x, y, h, a, b, c;
    cout << "Enter 1st coordinate: ";
    cin >> x;
    cout << "Enter 2nd coordinate: ";
    cin >> y;
    cout << "Enter the value of h: ";
    cin >> h;
    a = 2 * h;
    b = 3 * h;
    c = 4 * h;
    // calculations for border

    if (x == a && y >= 0 && y <= c)
        cout << "point lie on the border";
    else if (x >= 0 && x <= b && y <= h)
        cout << "point lie on the border";
    else if (x == 0 && y >= 0 && y <= h)
        cout << "point lie on the border";
    else if (x == b && y >= 0 & y <= h)
        cout << "point lie on the border";
    else if (x >= h && x <= a && y == a)
        cout << "point lie on the border";
    else if (y == h && x >= h && x <= a)
        cout << "point lie on the border";
    else if (y >= 0 && y <= c && x == a)
        cout << "point lie on the border";
    else if (y == h && x >= a && x <= b)
        cout << "point lie on the border";
    else if (x >= 0 && x <= h && y == h)
        cout << "point lie on the border";
    else if (y == b && x >= h && x <= a)
        cout << "point lie on the border";
    else if (x >= h && x <= a && y == c)
        cout << "point lie on the border";

    // conditions for inside or outside
    else if (x >= h && x < a && y > h && y < c)
        cout << "point lie inside the figure";
    else if (x > 0 && x <= b && y > 0 && y < c)
        cout << "point lie inside the figure";
    else
        cout << "point lie outside the figure";
}