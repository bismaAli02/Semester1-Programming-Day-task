#include <iostream>
using namespace std;
int arr[100];
int number = 0;
int idx = 0;
int res;
void inputA()
{
    for (int x = 0; x < idx; x++)
        cin >> arr[x];
}
void even_odd_transform()
{
    for (int i = 1; i <= number; i++)
    {
        for (int y = 0; y < idx; y++)
        {
            if (arr[y] % 2 == 0)
                arr[y] = arr[y] - 2;
            else
                arr[y] = arr[y] + 2;
        }
    }
}
void display()
{
    for (int x = 0; x < idx; x++)
    {
        cout << arr[x] << ", ";
    }
}
main()
{
    cout << "Enter index for array: ";
    cin >> idx;
    cout << "Enter number of transformation: ";
    cin >> number;
    inputA();
    even_odd_transform();
    display();
}