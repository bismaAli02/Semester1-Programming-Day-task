#include <iostream>
using namespace std;
string arr[1000];
int idx = 0;
int count = 0;
int res = 0;
void inputA()
{
    for (int x = 0; x < idx; x++)
        cin >> arr[x];
}
void colour()
{
    for (int x = 0; x < idx - 1; x++)
    {
        if (arr[x] != arr[x + 1])
            count = count + 1;
    }
}
void display()
{
    res = idx * 2 + count;
    cout << res;
}
main()
{
    cout << "Enter number of square: ";
    cin >> idx;
    inputA();
    colour();
    display();
}