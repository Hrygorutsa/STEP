#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header.h"

using namespace std;

const int N = 10;
int hiddenField[N][N];
char field[N][N];

void clearField(char f = '*')
{
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            field[i][j] = f;
            hiddenField[i][j] = 0;
        }
    }
}

void mineSet(int counter = 10)
{
    for (size_t i = 0; i < counter;)
    {
        int x = rand() % N;
        int y = rand() % N;
        if (!hiddenField[x][y])
        {
            hiddenField[x][y] = 1;
            i++;
        }
    }
}

void showHidden()
{
    cout << "  ";
    for (size_t i = 0; i < N; i++) // horizontal
    {
        cout << i << " ";
    }
    cout << "\n----------------------\n";
    for (size_t i = 0; i < N; i++) // vertical
    {
        cout << (char)(i + 65) << '|';
        for (size_t j = 0; j < N; j++)
        {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
}

bool pick(int x, int y)
{
    if (hiddenField[x][y])
        return false;

    int tmp = 0;
    for (size_t i = x - 1; i <= x + 1 && i < N; i++)
    {
        for (size_t j = y - 1; j <= y + 1 && j < N; j++)
        {
            if (i >= 0 && j >= 0)
                tmp += hiddenField[i][j];
        }
    }

    field[x][y] = tmp + '0';
    return true;
}

void game()
{
    clearField();
    mineSet(20);

    int y;
    char x;
    do
    {
        showHidden();
        cout << "\nChoose please [Big symbol first, second number]:\n";
        cin >> x >> y;
        x = x - 65;
    } while (pick(x, y));

    cout << "\nGame Over!\n" << endl;
}
