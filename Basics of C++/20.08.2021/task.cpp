#include<iostream>
#include <ctime>
using namespace std;

//1
/*
void next_day(int day, int month, int year);

void input_date_again()
{
	cout << "You input something wrong check your date and repeat it:";
	int day, month, year;
	cout << "\nInput your date(day):";
	cin >> day;
	cout << "Input your date(month):";
	cin >>month;
	cout << "Input your date(year):";
	cin >> year;

	next_day(day, month, year);
}

void next_day(int day, int month, int year)
{


	bool last_day = false;
	int max_day;
	switch (month)
	{
	case 1:  max_day = 31; break;
	case 2:  year % 4 != 0 ? max_day = 28 : max_day = 29; break;
	case 3:  max_day = 31; break;
	case 4:  max_day = 30; break;
	case 5:  max_day = 31; break;
	case 6:  max_day = 30; break;
	case 7:  max_day = 31; break;
	case 8:  max_day = 31; break;
	case 9:  max_day = 30; break;
	case 10: max_day = 31; break;
	case 11: max_day = 30; break;
	case 12: max_day = 31; break;
	default: input_date_again(); return;
	}

	if (day > max_day || day < 0)
	{
		input_date_again();
		return;
	}


	if (day == max_day)
	{
		if (month == 12) { day = 1; month = 1; year++; }
		else { day = 1; month++; year++; }
		last_day = true;
	}
	else
	{

		day++;

	}

	if (last_day)
	{
		cout << "Last day of month! " << "Tomorrow " << day << "." << month << "." << year << endl;
	}
	else
	{
		cout << "Tomorrow " << day << "." << month << "." << year <<endl;
	}
}

int main()
{
	

	int day, month, year;

	cout << "Input your date(day):";
	cin >> day;
	cout << "Input your date(month):";
	cin >>month;
	cout << "Input your date(year):";
	cin >> year;

	next_day(day, month, year);

	return 0;
}
*/

//2 v2

/*void time(int h = 0, int m = 0, int s = 0)
{
	if (h < 10) cout << "0";
	cout << h << ":";
	if (m < 10) cout << "0";
	cout << m << ":";
	if (s < 10) cout << "0";
	cout << s <<endl;
}

int main()
{
	int sec, hour, min;
	while (true)
	{
		cout << "enter hours, minutes and seconds." << endl;
		cout << "hours:";
		cin >> hour;
		if (hour < 0 || hour > 23)
		{
			cout << "error!!! hours should be in between [0..23]" << endl;
			continue; // or using for
		}

		cout << "minutes:";
		cin >> min;
		if (min < 0 || min > 59)
		{
			cout << "error: minutes should be in between [0..59]" << endl;
			continue;
		}

		cout << "seconds:";
		cin >> sec;
		if (sec < 0 || sec > 59)
		{
			cout << "error: seconds should be in between [0..59]" << endl;
			continue;
		}


		break;
	}
	time(hour, min, sec);
	
}*/

//3
/*int main()
{
	int sec, hour, min;
	while (true)
	{
		cout << "Enter hours, minutes and seconds." << endl;
		cout << "hours:";
		cin >> hour;
		if (hour < 0 || hour > 23)
		{
			cout << "Error!!! hours should be in between [0..23]" << endl;
			continue; // or using for
		}

		cout << "minutes:";
		cin >> min;
		if (min < 0 || min > 59)
		{
			cout << "Error: minutes should be in between [0..59]" << endl;
			continue;
		}

		cout << "seconds:";
		cin >> sec;
		if (sec < 0 || sec > 59)
		{
			cout << "Error: seconds should be in between [0..59]" << endl;
			continue;
		}

		
		break;
	}

	cout << "Total seconds: " << (sec + min * 60 + hour * 60 * 60) << endl;



}*/ 

/*4 (without days)
void time(int h = 0, int m = 0, int s = 0)
{
	if (h < 10) cout << "0";
	cout << h << ":";
	if (m < 10) cout << "0";
	cout << m << ":";
	if (s < 10) cout << "0";
	cout << s <<endl;
}


int main()
{
	int n{};
	cout << "Input number of seconds: " << endl;
	cin >> n;

	int hour{ n / 3600 };
	int min{ n / 60 % 100 };
	int sec{ n % 60 };

	hour -= hour >= 24 ? 24 : 0;
	min -= min >= 60 ? 60 : 0;

    time(hour, min, sec);
}*/
//5

/*
void time(int h = 0, int m = 0, int s = 0)
{
	if (h < 10) cout << "0";
	cout << h << ":";
	if (m < 10) cout << "0";
	cout << m << ":";
	if (s < 10) cout << "0";
	cout << s << endl;
}

int main()
{
	int sec, hour, min,counter;
	while (true)
	{
		cout << "Enter hours, minutes and seconds." << endl;
		cout << "hours:";
		cin >> hour;
		if (hour < 0 || hour > 23)
		{
			cout << "Error!!! hours should be in between [0..23]" << endl;
			continue; // or using for
		}

		cout << "minutes:";
		cin >> min;
		if (min < 0 || min > 59)
		{
			cout << "Error: minutes should be in between [0..59]" << endl;
			continue;
		}

		cout << "seconds:";
		cin >> sec;
		if (sec < 0 || sec > 59)
		{
			cout << "Error: seconds should be in between [0..59]" << endl;
			continue;
		}


		break;
	}
	time(hour, min, sec);
	int a = (sec + min * 60 + hour * 60 * 60);
	cout << "\nTotal seconds: " << a << endl;

	int n{};
	cout << " Input number of seconds : " << endl;
	cin >> n;

	int hour1{ n / 3600 };
	int min1{ n / 60 % 100 };
	int sec1{ n % 60 };

	hour1 -= hour1 >= 24 ? 24 : 0;
	min1 -= min1 >= 60 ? 60 : 0;

	time(hour1, min1, sec1);
	
	if (a > n)
	{
		counter = a - n;
	}
	else if (n > a) {
		counter = n - a;
	}
	else if (a == n) { counter = 0;  }
	cout << "Difference betwen time(in seconds): " << counter << endl;

	int hour2{ counter / 3600 };
	int min2{ counter / 60 % 100 };
	int sec2{ counter % 60 };
	hour2 -= hour2 >= 24 ? 24 : 0;
	min2 -= min2 >= 60 ? 60 : 0;
	cout << "Difference betwen time(in hh,mm,ss): " << endl;

	time(hour2, min2, sec2);
}
*/


