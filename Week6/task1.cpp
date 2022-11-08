#include <iostream>
using namespace std;

string relations(int x, char y)
{
     if (x == -1 && y == 'm')
          cout << "father";
     else if (x == -1 && y == 'f')
          cout << "mother";
     else if (x == -2 && y == 'm')
          cout << "grand father";
     else if (x == -2 && y == 'f')
          cout << "grand mother";
     else if (x == -3 && y == 'm')
          cout << "great grand father";
     else if (x == -3 && y == 'f')
          cout << "great grand mother";
     else if (x == 0)
          cout << "me !";
     else if (x == 1 && y == 'm')
          cout << " son";
     else if (x == 1 && y == 'f')
          cout << "daughter";
     else if (x == 2 && y == 'm')
          cout << " grand son";
     else if (x == 2 && y == 'f')
          cout << " grand daughter";
     else if (x == 3 && y == 'm')
          cout << "great grand son";
     else if (x == 3 && y == 'f')
          cout << "great grand daughter";
     else
          cout << "Invalid";
}
// end of function
main()
{
     int num;
     char ch;
     cout << "Enter a number: ";
     cin >> num;
     cout << "Enter (f / m)";
     cin >> ch;
     string output = relations(num, ch);
     cout << output;
}
