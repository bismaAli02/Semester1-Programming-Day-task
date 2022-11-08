#include <iostream>
using namespace std;
main()
{
    int num4, num3, num2, num1, mod1, mod2, mod3, mod4, sum;
    cout << "Enter any four digit number: ";
    cin >> num4;
    mod1 = num4 % 10;
    num3 = num4 / 10;
    mod2 = num3 % 10;
    num2 = num3 / 10;
    mod3 = num2 % 10;
    num1 = num2 / 10;
    mod4 = num1 % 10;
    sum = mod1 + mod2 + mod3 + mod4;
    cout << "The sum of all four digit number is: " << sum;
}