#include <iostream>
using namespace std;

//1

void fill(int** arr, const size_t row, const size_t col, int min = 1, int max = 10)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = min + rand() % (max - min + 1);
        }
    }
}
void print(int** arr, const size_t row, const size_t col, string text = "")
{
    cout << "\n\n \t" << text << "\n======================================================================\n\n";
    for (size_t i = 0; i < row; i++)
    {
        cout << "\t";
        for (size_t j = 0; j < col; j++)
        {

            if (arr[i][j] > 0) { cout << " "; }
            if (arr[i][j] == 0) { cout << "   "; }
            if ((arr[i][j] < 10 && arr[i][j] > 0) || (arr[i][j] > -10 && arr[i][j] < 0)) { cout << "  "; }
            else if ((arr[i][j] < 100 && arr[i][j] > 0) || (arr[i][j] > -100 && arr[i][j] < 0)) { cout << " "; }
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}
void createColum(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }


}
void deleteColum(int** arr, int row) {
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

}
/*void addColum(int** &arr, int row, int& col, int index) {

    int** tmp=new int*[row];
    createColum(tmp, row, col + 1);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j < index) { tmp[i][j] = arr[i][j]; }
            else { tmp[i][j+1] = arr[i][j]; }
        }
            tmp[i][index] = 0;
        
    }
    deleteColum(arr, row);
    delete[] arr;
    arr = tmp;
    col++;

}*/
//2
void delColum(int** &arr, int row, int& col, int index) {

    int** tmp=new int*[row];
    createColum(tmp, row, col+1);
    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < col; j++)
        {
            if (j < index) { tmp[i][j] = arr[i][j];  }
            else { tmp[i][j+1] = arr[i][j]; }
        }
            tmp[i][index] = 0;
        
    }
    deleteColum(arr, row);
    delete[] arr;
    arr = tmp;
    col--;
}


int main()
{
   int row = 4, col = 3;
    int** ptr = new int* [row];
    createColum(ptr, row, col);
    fill(ptr, row, col);
    cout << "Before :: " << endl;
    print(ptr, row, col);
    //addColum(ptr, row, col, 1);
    //cout << "After  :: " << endl;
    //print(ptr, row, col);
    delColum(ptr, row, col, 1);
    cout << "After 2 :: " << endl;
    print(ptr, row, col);
}