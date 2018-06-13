//2_2.cpp
#include <iostream.h>
//using namespace std;
void main(void)
{
	int year;
	bool IsLeapYear;
	
	cout << "Enter the year: ";
	cin >> year;
	IsLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	
	if (IsLeapYear)
	    cout << year << " is a leap year" << endl;
	else
	    cout << year << " is not a leap year" << endl;
}

