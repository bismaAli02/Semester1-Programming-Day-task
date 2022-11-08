#include <iostream>
using namespace std;
main()
{
    string mname;
    int adultp, adultt, childp, childt, total, percent;
    float donatedp, remainp;
    cout << "Enter the name of movie: ";
    cin >> mname;
    cout << "What is the price of adult ticket: ";
    cin >> adultp;
    cout << "What is the price of child ticket: ";
    cin >> childp;
    cout << "What is the amount of adult tickets sold: ";
    cin >> adultt;
    cout << "What is the amount of child tickets sold: ";
    cin >> childt;
    total = (adultp * adultt) + (childp * childt);
    cout << "Enter the percent of amount you want to donate to charity: ";
    cin >> percent;
    donatedp = total * percent / 100.0;
    cout << "The donated amount is " << donatedp << endl;
    remainp = total - donatedp;
    cout << "Profit generated is " << remainp << endl;
}