#include <iostream>
using namespace std;
main()
{
    int initv, finv, a, t;
    cout << "Enter the initial velocity: ";
    cin >> initv;
    cout << "Enter the acceleration of the toy car: ";
    cin >> a;
    cout << "Enter the time: ";
    cin >> t;
    finv = a * t + initv;
    cout << "The value of final velocity is: " << finv;
}