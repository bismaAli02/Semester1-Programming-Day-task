#include <iostream>
using namespace std;
int arr[1000];
int idx = 0;
void inputA()
{
    for (int x = 0; x < idx; x++)
        cin >> arr[x];
}

string sevenBoom()
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 7)
        {
            return "Boom!";
        }
    }
    return "There is no 7 in a array";
}
main()
{
    cout << "Enter index of array: ";
    cin >> idx;
    inputA();
    string res = sevenBoom();
    cout << res;
}