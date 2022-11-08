#include <iostream>
using namespace std;
main()
{
    int length, width, area;
    cout << "Enter the length of rectangle in feets: ";
    cin >> length;
    cout << "Enter the width of rectangle in feets: ";
    cin >> width;
    area = length * width;
    cout << "The area of rectangle in square feets is: " << area;
}