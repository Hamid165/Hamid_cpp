#include <iostream>
using namespace std;

int A[3][5] = {{10, 20, 30, 40, 50}, {1, 2, 3, 4, 5}, {11, 22, 33, 44, 55}};
int B[3][5] = {{10, 20, 30, 40, 50}, {1, 2, 3, 4, 5}, {11, 22, 33, 44, 55}};
int C[3][5];
int x, y;

int main()
{
    cout << "Matriks A : " << endl;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 5; y++)
        {
            cout << A[x][y] << "\t";
        }
        cout << endl;
    }
    cout << "Matriks B : " << endl;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 5; y++)
        {
            cout << B[x][y] << "\t";
        }
        cout << endl;
    }
    cout << endl
         << "Matriks penjumlahan : " << endl;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 5; y++)
        {
            C[x][y] = A[x][y] + B[x][y];
            cout << A[x][y] << "+" << B[x][y] << "="<<C[x][y] << "\t";
        }
        cout << endl;
    }

    return 0;
}
