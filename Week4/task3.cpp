#include<iostream>

using namespace std;

main()

{   
    int temp1, temp2, dif;
    cout<<"Enter temprature of city 1: ";
    cin>> temp1;
    cout<< "Enter temprature of city 2: ";
    cin>> temp2;
    dif = temp1 -  temp2;
    if (dif > 10)
   { 
       cout<<"Difference is too Big.."<<endl;

   }
   
   cout<<"Program ends...";
}