#include <iostream>
using namespace std;
  int num[100];
  int size = 0;
  int mini_check[100];
void inputA()
{
    cout <<"Enter how many times you want to enter in array: ";
    cin >> size;
    for (int x = 0; x < size ; x++)
    { 
     cin >> num[x];
    }
}

void check()
{
     int index = 0;
    for(int i = 1; i < size - 1; i++)
    {
        if (num[i] > num[i - 1] && num[i] > num[i + 1])
        {
            mini_check[index] = num[i];
            index ++;
        }
    }
      cout <<"Output :"<<endl;
    for(int x = 0; x < index; x++)
               cout << mini_check[x]<<endl;
}
main()
{
   inputA();
   check();
}