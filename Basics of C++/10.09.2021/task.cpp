#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int M;
    cout << "Enter the size of the array: ";
    cin >> M;
    int* a = new int[M];

    cout << "Enter the values of the array: \n";
    for (int i = 0; i < M; i++)
    {
        cin >> a[i];
    }

    while (true)
    {
        int n;
        cout << "\nMenu:" << endl;
        cout << "1 - Remove even values from the array" << endl;
        cout << "2 - Remove odd values from the array" << endl;
        cout << "3 - Show the current array" << endl;
        cout << "4 - Exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            int newSize = 0;
            for (int i = 0; i < M; i++)
            {
                if (a[i] % 2 != 0)
                {
                    a[newSize] = a[i];
                    newSize++;
                }
            }
            M = newSize;
        } break;
        case 2:
        {
            int newSize = 0;
            for (int i = 0; i < M; i++)
            {
                if (a[i] % 2 == 0)
                {
                    a[newSize] = a[i];
                    newSize++;
                }
            }
            M = newSize;
        } break;
        case 3:
        {
            cout << "Array: ";
            for (int i = 0; i < M; i++)
            {
                cout << a[i] << " ";
            }
        } break;
        case 4:
        {
            delete[] a;
            cout << "Goodbye" << endl;
            return 0;
        } break;
        default:
        {
            cout << "\nError. Please enter the correct number" << endl;
        }
        }
    }
}
