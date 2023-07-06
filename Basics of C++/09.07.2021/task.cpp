#include <iostream>
#include <ctime>
using namespace std;


int main()
//1

//{
//    srand(time(0));
//    int const m1 = 10, m2 = 5, min = 10, max = 30;
//    int arr[m1], arr1[m2], arr2[m2];
//    for (int i = 0; i < m1; i++)
//    {
//       arr[i] = min + rand() % (max-min);
//        cout << arr[i] << " ";
//    }
//    cout << "\n\n1 mas 2 mas \n";
//    for (int i = 0; i < m2; i++)
//    {
//        arr1[i] = arr[i];
//        arr2[i] = arr[i + 5];
//    }
//    for (int i = 0; i < m2; i++)
//    {
//        cout << arr1[i] << " " << arr2[i] << "\n";
//    }
//        return 0;
//}

//2
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int const m = 10, min = 10, max = 50; // тут можна було створити знмінні які будде вводить сам користувач
    int arr1[m], arr2[m], result[m];
    cout << "1 mas + 2 mas = result\n\n";
    for (int i = 0; i < m; i++)
    {
        arr1[i] = min + rand() % (max - min);
        arr2[i] = min + rand() % (max - min);
        result[i] = arr1[i] + arr2[i];
        cout << arr1[i] << " + "<<arr2[i];
        cout << " = " << result[i] << "\n";
    }
    return 0;
}