#include <iostream>

using namespace std;

main()
{
      string humidity, temp;
      cout << "Enter temprature: ";
      cin >> temp;
      cout << "Enter humidity: ";
      cin >> humidity;
      if (temp == "warm" && humidity == "dry")
            cout << " play tennis";
      else if (temp == "warm" && humidity == "humid")
            cout << "swim";
      else if (temp == "cold" && humidity == "dry")
            cout << "play basketball";
      else
            cout << "watch tv ";
}