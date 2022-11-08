#include <iostream>
using namespace std;
void year(int humanYear)
{
  if (humanYear == 1)
  {
    cout << "Cat years: 15 " << endl;
    cout << "Dog years: 15 " << endl;
  }
  else if (humanYear == 2)
  {
    int res1 = 15 + 9;
    int res2 = 15 + 9;
    cout << "Cat years: " << res1 << endl;
    cout << "Dog years: " << res2 << endl;
  }
  else
  {
    // int y1 = humanYear * 4;
    int res1 = 15 + 9 + ((humanYear - 2) * 4);
    // int y2 = humanYear * 5;
    int res2 = 15 + 9 + ((humanYear - 2) * 5);
    cout << "Cat years: " << res1 << endl;
    cout << "Dog years " << res2 << endl;
  }
}
main()
{
  int y;
  cout << "Enter a year: ";
  cin >> y;
  year(y);
}
