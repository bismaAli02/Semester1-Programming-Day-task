#include <iostream>

using namespace std;

main()
{
   int date;
   string month;
   cout << "Enter date of birth: ";
   cin >> date;
   cout << "Enter month of birth: ";
   cin >> month;
   if ((month == "March" && date >= 21) || (month == "April" && date <= 19))
   {
      cout << "Your sign is Aries" << endl;
      cout << "symbol is.. The Ram";
   }

   else if ((month == "April" && date >= 20) || (month == "May" && date <= 20))
   {
      cout << "Your sign is Taurus" << endl;
      cout << "symbol is.. The bull";
   }

   else if ((month == "May" && date >= 21) || (month == "June" && date <= 20))
   {
      cout << "Your sign is Gemini" << endl;
      cout << "symbol is.. The Twins";
   }

   else if ((month == "June" && date >= 21) || (month == "July" && date <= 22))
   {
      cout << "Your sign is CAncer" << endl;
      cout << "symbol is.. The Crab";
   }

   else if ((month == "july" && date >= 23) || (month == "August" && date <= 22))
   {
      cout << "Your sign is Leo" << endl;
      cout << "symbol is.. The Lion";
   }

   else if ((month == "August" && date >= 23) || (month == "September" && date <= 22))
   {
      cout << "Your sign is Virgo" << endl;
      cout << "symbol is.. The Virgin";
   }

   else if ((month == "September" && date >= 23) || (month == "October" && date <= 22))
   {
      cout << "Your sign is Libra" << endl;
      cout << "symbol is.. The scales";
   }

   else if ((month == "October" && date >= 23) || (month == "November" && date <= 21))
   {
      cout << "Your sign is Scorpio" << endl;
      cout << "symbol is.. The Scorpion";
   }

   else if ((month == "November" && date >= 22) || (month == "December" && date <= 21))
   {
      cout << "Your sign is Sagittarius " << endl;
      cout << "symbol is.. The Archer";
   }

   else if ((month == "December" && date >= 22) || (month == "January" && date <= 19))
   {
      cout << "Your sign is Capricon" << endl;
      cout << "symbol is.. The Goat";
   }

   else if ((month == "january" && date >= 20) || (month == "February" && date <= 18))
   {
      cout << "Your sign is Aquarius" << endl;
      cout << "symbol is.. The Water Bearer";
   }

   else
   {
      cout << "Your sign is Pisces" << endl;
      cout << "symbol is.. The Fishes";
   }
}
