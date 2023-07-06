#include <iostream>
#include <ctime>
using namespace std;

void fill(int* arr, const int& length, int min = 1, int max = 20)
{
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = 1 + rand() % (max - min + 1);
    }
}
void print(const int* arr, const int& length, string text = "")
{
    cout << "\n\n" << text << " :: ";
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "\n====================================================================\n\n";
}

int* norepeatA(int* arr_A, int* arr_B, const int& length_a, const int& length_b, int& size)
{
	size = 0;
	for (size_t i = 0; i < length_a; i++)
	{
		bool flag = true;
		for (size_t j = 0; j < length_b; j++)
		{
			if (arr_A[i] == arr_B[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			bool f = true;
			for (size_t j = 0; j < i; j++)
			{
				if (arr_A[j] == arr_A[i]) {
					f = false;
					break;
				}
			}
			if (f) {
				size++;
			}
		}
	}
	int* tmp = new int[size];
	for (size_t i = 0, q = 0; i < length_a; i++)
	{
		bool flag = true;
		for (size_t j = 0; j < length_b; j++)
		{
			if (arr_A[i] == arr_B[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			bool f = true;
			for (size_t j = 0; j < q; j++)
			{
				if (tmp[j] == arr_A[i]) {
					f = false;
					break;
				}
			}
			if (f) {
				tmp[q++] = arr_A[i];
			}
		}
	}
	return tmp;
}

int main()
{
    int size_a = 0, size_b = 0, size;
	cout << "Input size of array M :: ";
	cin >> size_a;
	cout << "\nInput size of array N :: ";
	cin >> size_b;
    int* ptr_a = new int[size_a];
    int* ptr_b = new int[size_b];
    fill(ptr_a, size_a);
    fill(ptr_b, size_b);
    print(ptr_a, size_a, "Array A :: ");
    print(ptr_b, size_b, "Array B :: ");
    int* ptr = norepeatA(ptr_a, ptr_b, size_a, size_b, size);
	print(ptr, size, "Array :: ");

}