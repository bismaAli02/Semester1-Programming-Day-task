#include <iostream>

using namespace std;

main()
{
   string country;
   cout << "Enter country name where you live: ";
   cin >> country;
   if (country != "Germany" || country != "Australia")
      cout << "You should come to visit these sometimes..";
   else
      cout << "Beautiful country..";
}