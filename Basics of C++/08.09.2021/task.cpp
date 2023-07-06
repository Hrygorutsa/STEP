//1
/*#include <iostream>
using namespace std;

void main()
{
    const int size = 10;
    int arr1[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int arr2[size];
    int* ptr_arr1 = arr1;
    int* ptr_arr2 = arr2;

    cout << "{ ";
    for (int i = 0; i < size; i++)
    {
        ptr_arr2 = ptr_arr1;
        cout << *ptr_arr2 << " " << endl;
        ptr_arr1++;
        ptr_arr2++;
    }
    cout << "}\n\n";

    system("PAUSE");
}
*/


//2

#include <iostream>

void reverseArray(int* arr, int size) {
    int* start = arr;                          // Указатель на начало массива
    int* end = arr + size - 1;                  // Указатель на конец массива

    while (start < end) {
        // Обмен значениями, на которые указывают указатели start и end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Перемещение указателей внутрь массива
        start++;
        end--;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed array: ";
    printArray(arr, size);

    delete[] arr;

    return 0;
}

