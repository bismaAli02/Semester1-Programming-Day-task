#include <iostream>
using namespace std;
string x;
int count = 0;
void input()
{
  cout << "Enter word: ";
  cin >> x;
}
bool display()
{
  for (int i = 0; x[i] != '\0'; i++)
    count = count + 1;
  if (count % 2 == 0)
    return true;
  else
    return false;
}
main()
{
  input();
  bool res = display();
  cout << res;
}
