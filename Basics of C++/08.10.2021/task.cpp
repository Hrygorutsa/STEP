#include <iostream>
using namespace std;

void multiplyMatrix() {
    int aMatrix[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int bMatrix[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int cMatrix[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            for (int i = 0; i < 2; i++) {
                cMatrix[row][col] += aMatrix[row][i] * bMatrix[i][col];
            }
        }
    }

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << cMatrix[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Result:" << endl;
    multiplyMatrix();
    return 0;
}
