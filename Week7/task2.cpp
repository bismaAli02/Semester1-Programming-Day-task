#include <iostream>
using namespace std;
int triangle(int num)
{
    int dots = 0;
    int i = 1;
    while (i <= num)
    {
        dots = dots + i;
        i++;
    }

    return dots;
}

main()
{
    int num;
    cout << "Enter number of triangle: ";
    cin >> num;
    int dots;
    dots = triangle(num);
    cout << dots;
}