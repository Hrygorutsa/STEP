#include <iostream>
using namespace std;


/*1
int sumDigits(int n)
{
    if (n < 10) return n;
    return sumDigits(n / 10) + n % 10;
}

int main()
{
    int n;
    cout << "Input number: ";
    cin >> n;
    cout << sumDigits(n) << endl;;

    return 0;
}*/

/*2
void sumDigits(int count)
{
    if (count == 0) return;
    cout << "( ";
    sumDigits(count - 1);
    cout << ") ";
}

int main()
{
    int n;
    cout << "Input number: ";
    cin >> n;
    sumDigits(n);
    cout << endl;
    return 0;
}*/