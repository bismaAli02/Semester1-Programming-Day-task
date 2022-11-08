#include <iostream>

using namespace std;

main()
{
  char c;
  char t;
  int min, time;
  float price;
  cout << "Enter which type of customer you are (Regular or Premium) Select ( r/p ): ";
  cin >> c;
  if (c == 'p' || c == 'P')
  {
    cout << " (Press 'D' for day time or Press 'N' for night time call: ";
    cin >> t;
  }
  cout << "Enter the number of minutes you used the service: ";
  cin >> min;
  if (c == 'r' || c == 'R')
  {
    if (min >= 1 && min <= 50)
    {
      cout << "The charges are: 10$";
    }
    else if (min > 50)
    {
      time = (min - 50);
      price = (time * 0.20) + 10;
      cout << "The charges are: " << price << "$";
    }
  }
  else if (c == 'p' || c == 'P')
  {
    if (t == 'D' || t == 'd')
    {
      if (min >= 1 && min <= 75)
      {
        cout << "Free calls";
      }
      else
      {
        time = min - 75;
        price = min * 0.10;
        cout << "The Charges are: " << price << "$";
      }
    }

    else if (t == 'N' || t == 'n')
    {
      if (min >= 1 && min <= 100)
      {
        cout << "Free calls";
      }
      else
      {
        time = min - 100;
        price = min * 0.05;
        cout << "The charges are: " << price << "$";
      }
    }
    else
    {
      cout << "invalid Character";
    }
  }
}
