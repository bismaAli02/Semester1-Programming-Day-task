# include <iostream>
using namespace std;
string x , y;
int count = 0;
void inputA()
{
    cout<<"Enter 1st word: ";
    cin>> x;
    cout<<"Enter 2nd word: ";
    cin>> y;
}
void same()
{
    for (int i = 0 ; x[i] != '\0' ; i++)
    {
        for (int j = 0; y[j] != '\0'; j++)
        {
            if (x[i] == y[j]){
            count = count + 1;
            y[j] = '/';
            break;
            }
        }
    }
    cout << count;
}
main()
{
    inputA();
    same();
}