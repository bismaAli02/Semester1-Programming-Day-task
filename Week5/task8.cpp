#include <iostream>
using namespace std;
main()
{
	int sHours, sMin, aHours, aMin;
	int difH, difM, sTime, aTime, difTime;
	cout << "Enter the exam starting time in hours: ";
	cin >> sHours;
	cout << "Enter the exam starting time in minutes: ";
	cin >> sMin;
	cout << "Enter the arrival time in hours: ";
	cin >> aHours;
	cout << "Enter the arrival time in minutes: ";
	cin >> aMin;
	sTime = sHours * 60;
	sTime = sTime + sMin;
	aTime = aHours * 60;
	aTime = aTime + aMin;
	sTime;
	aTime;
	difTime = sTime - aTime;
	difH = difTime / 60;
	difM = difTime % 60;
	int dif;
	dif = sHours - aHours;
	if (sTime == aTime)
	{
		cout << "You are on time" << endl;
	}
	if (difTime <= 30 && (dif == 1 || dif == 0))
	{
		cout << "You are on time" << endl;
		cout << difTime << " minutes before exam start";
	}
	else if (sTime > aTime && difTime > 30)
	{
		cout << "You are early" << endl;
		cout << difH << " hours and " << difM << " minutes before exam start";
	}
	else if (sTime < aTime)
	{
		cout << "You are Late" << endl;
		if (difH < 0)
		{
			difH = difH * (-1);
		}
		if (difM < 0)
		{
			difM = difM * (-1);
		}

		cout << difH << " hours and " << difM << " minutes late";
	}
}