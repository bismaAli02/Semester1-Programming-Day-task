#include <iostream>

using namespace std;

main()

{
     int speed;
     cout << "Enter the speed in km per hour: ";
     cin >> speed;
     if (speed > 100)
     {
          cout << "Halt....YOU WILL BE CHALLANED!!!" << endl;
     }
     else
     {
          cout << "perfect! you are going good." << endl;
     }
     cout << "Stay safe!!!";
}