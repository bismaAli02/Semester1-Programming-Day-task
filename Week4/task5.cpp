#include <iostream>
using namespace std;
main()
{
    int holiday, working, gameT, diff;
    float diff1;
    float diff2;

    cout << "How many holidays are there in one year: ";
    cin >> holiday;
    working = 365 - holiday;
    gameT = (working * 63) + (holiday * 127);
    diff = 30000 - gameT;
    diff1 = diff / 60.0;
    diff = diff / 60;
    diff2 = diff1 - diff;
    diff2 = diff2 * 60;

    if (gameT < 30000)
    {
        cout << "Tom sleeps well " << endl;
        cout << diff << " hours and " << diff2 << " minutes less for play";
    }

    if (gameT > 30000)
    {
        cout << "Tom will run away " << endl;
        diff = diff * (-1);
        diff2 = diff2 * (-1);
        cout << diff << " hours and " << diff2 << " minutes for play";
    }
}