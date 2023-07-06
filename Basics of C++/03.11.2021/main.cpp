#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    int x;
    while (true)
    {
        game();
        cout << "\nWant to try again? [1]-Yes; [2]-No\n";
        cin >> x;
        if (x == 1)
        {
            cout << "\nHave fun!\n";
            continue;
        }
        else if (x == 2)
        {
            cout << "\nBye-Bye!" << endl;
            break;
        }
        else
        {
            cout << "\nWrong number!!! Game restarted.\n" << endl;
            continue;
        }
    }
    return 0;
}
