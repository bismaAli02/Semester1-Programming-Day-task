#include <iostream>
using namespace std;
string arr[4];
void inputA()
{
  for (int x = 0; x < 4; x++)
    cin >> arr[x];
}
bool testJackpot()
{
  for (int x = 0; x < 3; x++)
  {
    if (arr[x] != arr[x + 1])
      return false;
  }
  return true;
}
main()
{
  inputA();
  bool res = testJackpot();
  cout << "result is: " << res;
}
