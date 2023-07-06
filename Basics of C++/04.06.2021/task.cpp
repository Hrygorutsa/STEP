#include <iostream>
using namespace::std;
int main()
{
    //1 page
     /*1)
    int s, hours, min;
    cout << "Enter distance :";
    cin >> s;
    cout << "Enter hours and min :" << endl;
    cin >> hours >> min;
    cout << s / (double)(hours + min / 60.0) << "km\\h" << endl;
    system("pause");
    */
    /*2)

        double hours, mins, seconds;
        double hours1, mins1, seconds1;
        cout << "Enter the start time of a phone conversation: ";
        cin >> hours >> mins >> seconds;
        cout << "Enter the end time of a phone conversation: ";
        cin >> hours1 >> mins1 >> seconds1;
        cout << endl;
        double full_hours, full_mins, full_seconds;
        double price, res;
        full_hours = hours1 - hours;
        full_mins = (mins1 - mins) + (full_hours / 60);
        full_seconds = (seconds1 - seconds) + (full_mins / 60);
        price = 30 / 100 / 60;

        res = price * full_seconds;
        cout << "The price of a call is: " << res << endl << endl;

        system("pause"); */

        /*3)
       double length, consumption, petrol_1, petrol_2, petrol_3, value;
       double cost_petrol_1, cost_petrol_2, cost_petrol_3;
       cout << "Input length: ";
       cin >> length;
       cout << "Input consumption on every 100km.: ";
       cin >> consumption;
       cout << "Input cost on A-95+ petrol: ";
       cin >> petrol_1;
       cout << "Input cost on A-95 petrol: ";
       cin >> petrol_2;
       cout << "Input cost on A-92 petrol: ";
       cin >> petrol_3;
       cout << " : " << endl << endl;
       value = (length / 100) * consumption;
       cost_petrol_1 = value * petrol_1;
       cost_petrol_2 = value * petrol_2;
       cost_petrol_3 = value * petrol_3;
       cout << "Price on A-95+ petrol: " << cost_petrol_1 << endl << endl;
       cout << "Price on A-95 petrol: " << cost_petrol_2 << endl << endl;
       cout << "Price on A-92 petrol: "  << cost_petrol_3 << endl << endl;
       return 0;
       */
       /*
   }


      // 2 page
           /*1)
       const int time = 86400;
       int begin_hours, begin_min, begin_sec;
       int end_hours, end_min, end_sec;
       cout << "Enter hours: " << endl;
       cin >> begin_hours;
       cout << "Enter min: " << endl;
       cin >> begin_min;
       cout << "Enter sec: " << endl;
       cin >> begin_sec;

       double a = begin_hours * 3600 + begin_min * 60 + begin_sec;
       a = time - a;
       end_hours = a / 3600;
       end_min = a / 60 - end_hours * 60;
       end_sec = a - end_min * 60 - end_hours * 3600;
       cout << "before the end of the day left " << end_hours << " h " << end_min << " min " << end_sec << " sec" << endl; */

       //2)
       /*
       const int work_day = 28800;  //8*60*60=28800
       int sec;
       cout << "Enter sec: " << endl;
       cin >> sec;
       cout << "Left to work: " << (work_day - sec) / 3600 << " hours" << endl;
       system("pause");
       */
}