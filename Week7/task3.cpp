#include <iostream>
using namespace std;
void patient(int num)
{
  int tr_pat = 0, un_pat = 0, dr = 7;
  for (int n = 1; n <= num; n++)
  {
    int x;
    cout << "Enter patients: ";
    cin >> x;
    if ((n % 3 == 0) && ((un_pat - tr_pat) > 0))
    {
      dr = dr + 1;
    }
    if (x > dr)
    {
      tr_pat = tr_pat + dr;
      un_pat = un_pat + (x - dr);
    }
    else
    {
      tr_pat = tr_pat + x;
    }
  }
  cout << "treated patients: " << tr_pat << endl;
  cout << "untreated patients: " << un_pat << endl;
}

main()
{
  int days;
  cout << "Enter days: ";
  cin >> days;
  patient(days);
}