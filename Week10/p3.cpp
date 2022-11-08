#include <iostream>
using namespace std;
int word[100];
int count = 0;
int size = 0;
void inputA()
{
    cout <<"Enter how many times you want to enter in array: ";
    cin >> size;
    
    for (int x = 0; x < size; x++)
    { 
     cout<<"Enter number: ";
     cin >> word[x];
    }
}
 
 void find_odd()
 {
     for(int i = 0; i < size; i++)
     {
         for(int j = 0; j < size; j++)
         {
             if(word[i] == word[j])
              {
              count = count + 1;
              }
         }
         if (count % 2 != 0)
              {
                 cout << word[i];
                break;
              }
     } 
}   
main()
{
    inputA();
    find_odd();
}


