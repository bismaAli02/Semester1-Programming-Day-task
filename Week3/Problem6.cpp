#include <iostream>
using namespace std;
main()
{
    int days, weight, reqDays;
    cout << "How many days does it takes to loose 1kg of weight: ";
    cin >> days;
    cout << "How much weight you want to loose: ";
    cin >> weight;
    reqDays = days * weight;
    cout << "It would take " << reqDays << " days to loose " << weight << "kg of weight";
}