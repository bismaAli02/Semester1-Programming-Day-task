#include <iostream>

using namespace std;

main()

{
    string c_name;
    int price, total;
    float dis;
    cout << "Enter country name:  ";
    cin >> c_name;
    cout << "Enter ticket price in dollars: ";
    cin >> price;
    if (c_name == "Ireland")
    {

        dis = (price * 10.0) / 100;
    }
    else
    {
        dis = (price * 5.0) / 100;
    }

    total = price - dis;
    cout << "Total price after discount is: " << total << endl;
    cout << "Program ends... ";
}