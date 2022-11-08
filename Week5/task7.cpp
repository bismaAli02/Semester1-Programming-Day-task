#include <iostream>
using namespace std;
int main()
{
    string month;
    int days;
    float sPrice, aPrice, sDisc, aDisc, discPrice;
    cout << "Enter the name of month: ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> days;
    if (month == "May" || month == "may" || month == "October" || month == "october")
    {
        sPrice = days * 50.0;
        aPrice = days * 65.0;
        if (days > 14)
        {
            sDisc = 30;
            aDisc = 10;
        }
        else if (days > 7)
        {
            sDisc = 5;
            aDisc = 0;
        }
        else
        {
            sDisc = 0;
            aDisc = 0;
        }
        sDisc = sDisc * sPrice / 100;
        aDisc = aDisc * aPrice / 100;
        sPrice = sPrice - sDisc;
        aPrice = aPrice - aDisc;
        cout << "Studio: " << sPrice << endl;
        cout << "Appartment: " << aPrice << endl;
    }
    else if (month == "June" || month == "june" || month == "September" || month == "september")
    {
        sPrice = days * 75.0;
        aPrice = days * 68.0;
        if (days > 14)
        {
            sDisc = 20;
            aDisc = 10;
        }
        else
        {
            sDisc = 0;
            aDisc = 0;
        }
        sDisc = sDisc * sPrice / 100;
        aDisc = aDisc * aPrice / 100;
        sPrice = sPrice - sDisc;
        aPrice = aPrice - aDisc;
        cout << "Studio: " << sPrice << endl;
        cout << "Appartment: " << aPrice << endl;
    }
    else if (month == "July" || month == "july" || month == "August" || month == "august")
    {
        sPrice = days * 76.0;
        aPrice = days * 77.0;
        if (days > 14)
        {
            sDisc = 0;
            aDisc = 10;
        }
        else
        {
            sDisc = 0;
            aDisc = 0;
        }
        sDisc = sDisc * sPrice / 100;
        aDisc = aDisc * aPrice / 100;
        sPrice = sPrice - sDisc;
        aPrice = aPrice - aDisc;
        cout << "Studio: " << sPrice << endl;
        cout << "Appartment: " << aPrice << endl;
    }
    else
    {
        cout << "Invalid month";
    }

    return 0;
}