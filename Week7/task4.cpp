#include <iostream>
using namespace std;
void per(float num)
{
  float sum = 0, sum1 = 0, sum2 = 0, p1 = 0, p2 = 0, p3 = 0;
  for (int n = 1; n <= num; n++)
  {
    int x;
    cout << "Enter number: ";
    cin >> x;

    if (x % 2 == 0)
      sum = sum + 1;
    if (x % 3 == 0)
      sum1 = sum1 + 1;
    if (x % 4 == 0)
      sum2 = sum2 + 1;
  }
  p1 = (sum / num) * 100;
  cout << p1 << "%" << endl;
  p2 = (sum1 / num) * 100;
  cout << p2 << "%" << endl;
  p3 = (sum2 / num) * 100;
  cout << p3 << "%" << endl;
}
main()
{
  float num;
  cout << "Enter total number of integers: ";
  cin >> num;
  per(num);
}