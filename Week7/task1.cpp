#include<iostream>
using namespace std;
void amplify(int num)
{
    for(int i = 1; i <= num; i++)
    {
        if(i % 4 == 0)
        {
            int x = i * 10;
            cout<< x <<",";
        }
       else
         cout<< i <<",";
    }
}
main()
{
    int n;
    cout <<"Enter any number: ";
    cin >> n;
    amplify(n);
}