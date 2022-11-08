#include <iostream>
using namespace std;
char word[100];
int count = 0;
  int size = 0;
void inputA()
{
    cout <<"Enter how many times you want to enter in array: ";
    cin >> size;
    for (int x = 0; x < size; x++)
    { 
     cin >> word[x];
    }
}

int letter_count(char ch)
{
      for(int i = 0; i < size; i++)
      {
              if(word[i] == ch)
              {
                count = count + 1;
              }
    
      }
      return count;
}

main()
{
       inputA();
       int res = 0;
       char ch;
       cout<<"Enter any character: ";
       cin >> ch;
       res = letter_count(ch);
       cout <<"character present "<< res<<" times in array";
}



