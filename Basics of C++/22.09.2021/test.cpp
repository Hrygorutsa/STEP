#include <iostream>
#include <ctime>
using namespace std;

void circle(int R, double& len, double& square)
{
    len = 2 * 3.14 * R;
    square = 3.14 * (R * R);
}

void fill(int* arr, const size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = 1 + rand() % 20;
    }
}

void print(const int* arr, const size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void findMinMax(const int* arr, const size_t length, int& min, int& max)
{
    min = arr[0];
    max = arr[0];
    for (size_t i = 1; i < length; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

void mergeArrays(const int* arr1, const size_t length1, const int* arr2, const size_t length2, int* mergedArr, size_t& mergedLength)
{
    for (size_t i = 0; i < length1; i++)
    {
        mergedArr[i] = arr1[i];
    }
    for (size_t i = 0; i < length2; i++)
    {
        mergedArr[length1 + i] = arr2[i];
    }
    mergedLength = length1 + length2;
}

void removeDuplicates(const int* arr, const size_t length, int* resultArr, size_t& resultLength)
{
    resultLength = 0;
    for (size_t i = 0; i < length; i++)
    {
        bool isDuplicate = false;
        for (size_t j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            resultArr[resultLength] = arr[i];
            resultLength++;
        }
    }
}

int main()
{
    srand(time(0));

    // Task 1
    int R;
    double len, square;
    cout << "Enter the radius of the circle: ";
    cin >> R;
    circle(R, len, square);
    cout << "Circle Length: " << len << endl;
    cout << "Circle Area: " << square << endl;

    // Task 2
    const int size = 10;
    int arr[size];
    fill(arr, size);
    cout << "Array: ";
    print(arr, size);
    int min, max;
    findMinMax(arr, size, min, max);
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    // Task 3
    const size_t arr1Size = 5;
    const size_t arr2Size = 7;
    int arr1[arr1Size] = { 1, 2, 3, 4, 5 };
    int arr2[arr2size] = { 6, 7, 8, 9, 10, 11, 12 };
    const size_t mergedSize = arr1Size + arr2Size;
    int mergedArr[mergedSize];
    size_t mergedLength;
    mergeArrays(arr1, arr1Size, arr2, arr2Size, mergedArr, mergedLength);
    cout << "Merged Array: ";
    print(mergedArr, mergedLength);

    // Task 4
    const size_t arrSize = 10;
    int arrDuplicates[arrSize] = { 1, 2, 3, 4, 5, 2, 3, 6, 7, 8 };
    const size_t resultSize = arrSize;
    int resultArr[resultSize];
    size_t resultLength;
    removeDuplicates(arrDuplicates, arrSize, resultArr, resultLength);
    cout << "Array without duplicates: ";
    print(resultArr, resultLength);

    return 0;
}
