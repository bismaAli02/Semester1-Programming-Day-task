#include <iostream>

using namespace std;

main()
{
       string shape;
       float l, w, r, b, h;
       cout << "Enter shape: ";
       cin >> shape;

       if (shape == "square")
       {
              cout << "Enter lenght: ";
              cin >> l;
              float A = l * l;
              cout << "Area is: " << A;
       }
       if (shape == "rectangle")
       {
              cout << "Enter lenght: ";
              cin >> l;
              cout << "Enter widht: ";
              cin >> w;

              float A = l * w;
              cout << "Area is: " << A;
       }

       if (shape == "circle")
       {
              float pi = 3.147;
              cout << "Enter radius: ";
              cin >> r;

              float A = pi * r * r;
              cout << "Area is: " << A;
       }

       if (shape == "triangle")
       {
              cout << "Enter base: ";
              cin >> b;
              cout << "Enter hieght: ";
              cin >> h;

              float A = (b * h) / 2;
              cout << "Area is: " << A;
       }
}