#include <iostream>
using namespace std;
string leap(int year)
{
   string LeapYear;
   int mod4, mod100, mod400;
   mod4 = year % 4;
   mod100 = year % 100;
   mod400 = year % 400;
   if ((mod4 == 0 && mod100 == 0 && mod400 == 0) || (mod4 == 0 && mod100 != 0))
   {
      LeapYear = "This is a Leap Year";
   }
   else if ((mod4 != 0) || (mod4 == 0 && mod100 == 0 && mod400 != 0))
   {
      LeapYear = "This is not a Leap Year";
   }
   return LeapYear;
}
main()
{
   int y;
   cout << "Enter a year: ";
   cin >> y;
   string output = leap(y);
   cout << output;
}
