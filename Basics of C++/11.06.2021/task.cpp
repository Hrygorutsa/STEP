#include <iostream>
using namespace std;

int main()
{
/*1)
	int n;
	cout << "Input your number: " << endl;
	cin >> n;
	switch (n)
	{
	case 1: cout << "1-!" << endl; break;
	case 2: cout << "2-@" << endl; break;
	case 3:cout << "3-#" << endl; break;
	case 4:cout << "4-$" << endl; break;
	case 5:cout << "5-%" << endl; break;
	case 6:cout << "6-^" << endl; break;
	case 7:cout << "7-&" << endl; break;
	case 8:cout << "8-*" << endl; break;
	case 9:cout << "9-(" << endl; break;
	case 0:cout << "0-)" << endl; break;
	default: cout << "ERROR" << endl; break;
	}
	return 0;
	*/
 /* 2)


	int h, m, s;
	cout << "Input hours, minutes and seconds: " << endl;
	cin >> h >> m >> s;
	if (h > 0 && h < 24 && m > 0 && m < 60 && s > 0 && s < 60) { cout << "Correct!" << endl; }
	else { cout << "Error!" << endl; }

	return 0;
*/
	/*3

	{
		int x, y;
		cout << "Enter cordinats [x , y]: " << endl;
		cin >> x >> y;

		if (x > 0 && y > 0) { cout << "First quater " << endl; }
		else if (x < 0 && y > 0) { cout << "Second quater " << endl; }
		else if (x < 0 && y < 0) { cout << "Third quater" << endl; }
		else if (x > 0 && y < 0) { cout << "Fourth quater " << endl; }
		else if (x == 0 && y == 0) { cout << "Start of cordinats" << endl; }
		else if (x == 0 && y > 0 || y < 0) { cout << "On Y" << endl; }
		else if (y == 0 && x < 0 || x > 0) { cout << "On X" << endl; }
		else { cout << "Error!" << endl; }
	}


	return 0;
	*/

	/*4)
	int day, month, year, days_month;
	cout << "Input date dd mm yyyy: ";
	cin >> day >> month >> year;


	if (month > 0 && month <= 12) {
		switch (month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			days_month = 31; break;
		case 4: case 6: case 9: case 11:
			days_month = 30;  break;
		case 2:
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				days_month = 29;
			}
			else { days_month = 28; }
			break;

		}
		day++;
		if (day > days_month) {
			day = 1;
			month++;
		}
		if (month > 12) {
			month = 1;
			year++;
		}
		cout << ((day < 10) ? "0" : "") << day << ((month < 10) ? "0" : "") << month << "." << year << endl;
	}
	else {
		cout << "ERROR" << endl;
	}
	
		return 0;
		*/
}

