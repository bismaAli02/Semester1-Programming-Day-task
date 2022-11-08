#include <iostream>
using namespace std;
int main()
{
  string day, fruit;
  int num;
  float price, total;
  cout << "Which day of the week it is: ";
  cin >> day;
  cout << "Which fruit you want to buy: ";
  cin >> fruit;
  cout << "Enter the quantity of fruit: ";
  cin >> num;
  if (day == "monday" || day == "Monday" || day == "Tuesday" || day == "tuesday" || day == "Wednesday" || day == "wednesday" || day == "Thursday" || day == "thursday" || day == "Friday" || day == "friday")
  {
    if (fruit == "Banana" || fruit == "banana")
    {
      price = 2.50;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Apple" || fruit == "apple")
    {
      price = 1.20;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Orange" || fruit == "orange")
    {
      price = 0.85;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Grapefruit" || fruit == "grapefruit")
    {
      price = 1.45;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Kiwi" || fruit == "kiwi")
    {
      price = 2.70;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Pineapple" || fruit == "pineapple")
    {
      price = 5.50;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Grapes" || fruit == "grapes")
    {
      price = 3.85;
      total = num * price;
      cout << "Total is: " << total;
    }
    else
    {
      cout << "Invalid Fruit";
    } // entered fruit is not available

  } // this ends the if condition for weekdays
  else if (day == "Saturday" || day == "saturday" || day == "Sunday" || day == "sunday")
  {
    if (fruit == "Banana" || fruit == "banana")
    {
      price = 2.70;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Apple" || fruit == "apple")
    {
      price = 1.25;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Orange" || fruit == "orange")
    {
      price = 0.90;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Grapefruit" || fruit == "grapefruit")
    {
      price = 1.60;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Kiwi" || fruit == "kiwi")
    {
      price = 3.00;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Pineapple" || fruit == "pineapple")
    {
      price = 5.60;
      total = num * price;
      cout << "Total is: " << total;
    }
    else if (fruit == "Grapes" || fruit == "grapes")
    {
      price = 4.20;
      total = num * price;
      cout << "Total is: " << total;
    }
    else
    {
      cout << "Invalid Fruit";
    } // entered fruit is not available
  }   // this ends the if condition for weekends
  else
  {
    cout << "Invalid DAY";
  } // day entered is wrong

  return 0;
}