#include <iostream>
using namespace std;
void per(float num)
{
    float x, minibus = 0, train = 0, truck = 0, sum = 0, p1 = 0, p2 = 0, p3 = 0, avg_price;
    for (int n = 1; n <= num; n++)
    {
        cout << "Enter number: ";
        cin >> x;
        if (x > 0 && x <= 3)
            minibus = minibus + x;
        if (x > 3 && x <= 11)
            truck = truck + x;
        if (x > 11)
            train = train + x;
    }
    sum = minibus + truck + train;
    p1 = (minibus / sum) * 100;
    cout << "percentage for minibus cargo: " << p1 << "%" << endl;
    p2 = (truck / sum) * 100;
    cout << "Percentage for truck cargo: " << p2 << "%" << endl;
    p3 = (train / sum) * 100;
    cout << "percentage for train cargo: " << p3 << "%" << endl;
    avg_price = (minibus * 200 + truck * 175 + train * 120) / sum;
    cout << "Average price is: " << avg_price;
}
main()
{
    float num;
    cout << "Enter count of cargo: ";
    cin >> num;
    per(num);
}
