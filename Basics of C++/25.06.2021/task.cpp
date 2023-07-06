#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    while (1) {
        int select;
        cout << "Select option [1][2][3][4][5][6][7][8][9][10] and [0] to exit";
        cin >> select;
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 11;
        switch (select)
        {
        case 1:
            for (int i = 10; i >= 0; i--) {
                for (int l = 0; l <= b * 2; l++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;
        case 2:
            for (int i = 1; i <= 10; i++) {
                for (int j = 1; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 3:
            for (int i = 10; i >= 0; i--) {
                for (int k = 0; k <= b; k++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;
        case 4:
            for (int i = 10; i >= 0; i--) {
                for (int j = 0; j <= i; j++) {
                    cout << " ";
                }
                for (int k = 0; k <= a; k++) {
                    cout << "* ";
                }
                cout << endl;
                a++;
            }
            break;

        case 5:

            for (int i = 10; i >= 0; i--) {
                for (int k = 0; k <= d * 2; k++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                d++;
            }
            for (int i = 10; i >= 0; i--) {

                for (int j = 0; j <= i; j++) {
                    cout << " ";
                }
                for (int k = 0; k <= e; k++) {
                    cout << "* ";
                }
                cout << endl;
                e++;
            }
            break;
        case 6:
            for (size_t j = 1, q = 6; j <= 4 && q >= 0; j++, q -= 2)
            {
                for (size_t i = 0; i < j; i++)
                {
                    cout << "*";
                }
                for (size_t i = 0; i < q; i++)
                {
                    cout << " ";
                }
                for (size_t i = 0; i < j; i++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            for (size_t j = 3, q = 2; j >= 1 && q <= 6; j--, q += 2)
            {
                for (size_t i = 0; i < j; i++)
                {
                    cout << "*";
                }
                for (size_t i = 0; i < q; i++)
                {
                    cout << " ";
                }
                for (size_t i = 0; i < j; i++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;

        case 7:
            for (int i = 1; i <= 10; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 10; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 8:
            for (int i = 1; i <= 11; i++) {
                for (int k = 0; k <= f * 2; k++) {
                    cout << " ";
                }
                for (int j = 1; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
                f--;
            }
            for (int i = 10; i >= 0; i--) {
                for (int l = 0; l <= b * 2; l++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;
        case 9:
            for (int i = 10; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 10:
            for (int i = 1; i <= 10; i++) {
                for (int k = 0; k <= f * 2; k++) {
                    cout << " ";
                }
                for (int j = 1; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
                f--;
            }
            break;
        default:
            if (select < 0 || select > 10) {
                cout << "Error: Unavailable value" << endl;
            }
            break;
        }
        if (select == 0) {
            cout << "Bye Bye" << endl;
            break;
        }
    }
}
