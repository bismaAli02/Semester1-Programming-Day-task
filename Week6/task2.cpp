#include <iostream>
using namespace std;
void volume(float x, float y, float z, string unit)
{
  if (unit == "centimeters")
  {
    float res = (x * y * z) / 3;
    res = res * 100 * 100 * 100;
    cout << res << " cubic centimeters";
  }
  if (unit == "kilometers")
  {
    float res = (x * y * z) / 3;
    res = res / (1000 * 1000 * 1000);
    cout << res << " cubic kilometers";
  }
  if (unit == "milimeters")
  {
    float res = (x * y * z) / 3;
    res = res * 1000 * 1000 * 1000;
    cout << res << " milimeters";
  }
}

main()
{
  float lenght, widht, hieght;
  string u;
  cout << "Enter lenght: ";
  cin >> lenght;
  cout << "Enter widht: ";
  cin >> widht;
  cout << "Enter hieght: ";
  cin >> hieght;
  cout << "Enter unit: ";
  cin >> u;
  volume(lenght, widht, hieght, u);
}
