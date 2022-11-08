#include <iostream>
using namespace std;
string leap(int y, int z)
{
   int year = y + 1;
   if (y % 4 == 0 && y % 100 == 0 && y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
   {
      cout << "There are three leap year in decade";
   }
   else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
      cout << "There are three leap year in decade";
   else
      cout << "there are two leap year in decade ";
}
main()
{
   int y, z;
   cout << "Enter  year1: ";
   cin >> y;
   cout << "Enter  year2: ";
   cin >> z;
   string output = leap(y, z);
   cout << output;
}