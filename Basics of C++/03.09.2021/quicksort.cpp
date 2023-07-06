#include <iostream>
#include <ctime>

using namespace std;

/*1
void fill(int arr[], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = 1 + rand() % 20;
	}
}
void print(int arr[], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout<<arr[i] <<"\t";
	}
	cout << endl;
}
void reverse(int arr[], int left, int right)
{
	if (left > right) return;
	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	reverse(arr, left + 1, right - 1);
}

int main()
{
	srand(unsigned(time(0)));
	const int size = 10;
	int arr[size]{};
	fill(arr, size);
	cout << "\n\n";
	print(arr, size);
	reverse(arr, 0, size - 1);
	cout << "\n\n";
	print(arr, size);
}*/

//2


void fill(int* arr,const size_t length)
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


void quickSort(int* arr,int left,int right)
{
	int pivot = arr[left];
	int tmp_l = left;
	int tmp_r = right;
	while (left < right)
	{
		while (pivot < arr[right] && left < right) { right--; }
		if(left !=right)
		{
			arr[left] = arr[right];
			left++;
		}
		while (pivot > arr[left] && left < right) { left++; }
		if (left != right)
		{
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = pivot;
	pivot = left;
	left = tmp_l;
	right = tmp_r;
	if(pivot > left)
	{
		quickSort(arr, left, pivot - 1);
	}
	if(pivot < right)
	{
		quickSort(arr, pivot + 1, right);
	}
}

int searchBinary(int* arr,  int left, int right, int key)
{
	if (left > right) { return -1; }
	int middle = (left + right) / 2;
	if (arr[middle] == key) { return middle; }
	if (key > arr[middle]) { return searchBinary(arr, middle + 1, right, key); }
	if (key < arr[middle]) { return searchBinary(arr, left, middle - 1, key);  }
}
int main()

{
	int x;
	srand(unsigned(time(0)));
	const int size = 10;
	int arr[size];
	fill(arr, size);
	print(arr, size);
	quickSort(arr, 0, size - 1);
	print(arr, size);
	cout << "Input your number :: ";
	cin >> x;
	cout << "Index :: " << searchBinary(arr, 0, size - 1, x) << endl;

}