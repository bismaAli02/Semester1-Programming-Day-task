#include <iostream>

using namespace std;

main()

{
    int rr, wr, tu;
    cout << "Enter number of red roses: ";
    cin >> rr;
    cout << "Enter number of white roses: ";
    cin >> wr;
    cout << "Enter number of tulips: ";
    cin >> tu;
    float prR = 2.00;
    float prW = 4.10;
    float prT = 2.50;
    float total = (rr * prR) + (wr * prW) + (tu * prT);
    if (total > 200)
    {
        float dis = (total * 20.0) / 100;
        cout << "Original price is: " << total << endl;
        float payable = total - dis;
        cout << "Price after discount: " << payable;
    }
}