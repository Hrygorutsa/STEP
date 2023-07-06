#include <math.h>
#include <iostream>
using namespace std;

//1 (a)
//int main()
//{
//    double number, degree, result;
//    cout << "\nEnter the number: ";
//    cin >> number;
//    cout << "\nEnter the degree: ";
//    cin >> degree;
//
//    result = pow(number, degree);
//
//    cout << "\n" << number << "^" << degree << " = " << result;
//
//    return 0;
//}

//1 (b)
//int powInnumber(int number, int degree)
//{
//    if (degree == 0)
//        return 1;
//    if (degree == 1)
//        return number;
//    int result = number;
//    for (int i = 0; i < degree - 1; i++)
//        result *= number;
//    return result;
//}
//
//void main()
//{
//    int number, degree;
//    cout << "Enter number: ";
//    cin >> number;
//    cout << "Enter degree: ";
//    cin >> degree;
//    cout << "Rezultat = " << powInnumber(number, degree) << endl;
//}

//2 (a)
//int main()
//{
//int a = 0;
//int b = 0;
//
//cout << "Input num1: ";
//cin >> a;
//cout << "Input num2: ";
//cin >> b;
//int sum = 0;
//if (a + 1 < b)
//	for (int i = a + 1; i < b; i++)
//		sum += i;
//cout << sum << endl;
//}

//2 (b)
//int foo(int a, int b)
//{
//    int n;
//    n = b - a + 1;;
//	int result = 0;
//	if (a == b) 
//      return a;
//	if (a > b) 
//     return foo(b, a);
//	result = (a + b) * n / 2;;
//	return result;
//}
//
//void main()
//{
//int a = 0;
//int b = 0;
//
//cout << "Input num1: ";
//cin >> a;
//cout << "Input num2: ";
//cin >> b;
//
//
//cout <<"Answer: "<< foo(a,b) << endl;
//}



//3  

const int SIZE = 10;

void Set(int array[][SIZE])
{
    for (int i = 0; i < SIZE; i++)

        array[i][0] = rand() % 31;
}

void PRINT(int array[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {

        cout << array[i][0] << '\t';
        cout << endl;
    }
}

int LineSearch(int array[][SIZE], int key)
{
    int index = 0;
    for (int i = 0; i < SIZE; i++) {
        index++;
        if (array[i][0] == key)
            return index;
    }

    return -1;
}
void main()
{
    srand((int)time(0));
    int array[SIZE][SIZE], key;
    Set(array);
    PRINT(array);
    cout << "Element: ";
    cin >> key;

    if (LineSearch(array, key) == -1)
        cout << "\n Element not found" << endl;
    else cout << "\n Element found, number of Element: " << LineSearch(array, key) << endl;
}