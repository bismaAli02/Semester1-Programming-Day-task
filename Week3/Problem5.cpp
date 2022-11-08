#include <iostream>
using namespace std;
main()
{
    int m1, m2, m3, m4, m5, sum;
    string name;
    float percent;
    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter the marks of first test: ";
    cin >> m1;

    cout << "Enter the marks of second test: ";
    cin >> m2;

    cout << "Enter the marks of third test: ";
    cin >> m3;

    cout << "Enter the marks of forth test: ";
    cin >> m4;

    cout << "Enter the marks of fifth test: ";
    cin >> m5;

    sum = m1 + m2 + m3 + m4 + m5;
    percent = (sum / 500.0) * 100.0;
    cout << "The percentage of 5 test marks is: " << percent;
}