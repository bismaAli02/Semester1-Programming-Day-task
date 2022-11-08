#include<iostream>

using namespace std;

main()

{   
    int E_marks, M_marks, C_marks, S_marks, B_marks, tot_marks;
    string S_name;
    float percentage;
    cout<< "Enter student's name: ";
    cin>> S_name;
    cout<<"Enter English's marks: ";
    cin>> E_marks;
    cout <<"Enter Math's marks: ";
    cin>> M_marks;
    cout <<"Enter Social science's marks: ";
    cin>> S_marks;
    cout<< "Enter biology's marks: ";
    cin >> B_marks;
    cout<< "Enter chemistry's marks: ";
    cin >> C_marks;
    cout<< "Student name is: "<< S_name <<endl;
    tot_marks = E_marks + C_marks + B_marks + S_marks + M_marks;
    cout<< "Total marks: "<< tot_marks << endl;
    percentage = (tot_marks*100)/500 ;
    cout << "Total percentage is: "<< percentage << endl;
    if(percentage >= 90 && percentage <= 100)
        cout <<"Grade is A+";
    else if (percentage >= 80 )
        cout << "Grade is A";
    else if (percentage >= 70)
        cout << "Grade is B+";
    else if (percentage >= 60)
        cout << "Grade is B";
    else if (percentage >= 50)
        cout <<"Grade is C";
    else if (percentage >= 40)
        cout << "Grade is D";
    else
        cout << "Grade is F";
    }


