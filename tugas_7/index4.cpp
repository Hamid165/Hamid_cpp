#include <iostream>
using namespace std;

int A_129[3][3] = {{10, 20, 30}, {1, 2, 3}, {11, 22, 33}};
int B_129[3][3] = {{10, 20, 30}, {1, 2, 3}, {11, 22, 33}};
int C_129[3][3];

int main()
{

    cout << "Matriks penjumlahan : " << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C_129[x][y] = A_129[x][y] + B_129[x][y];
            cout << A_129[x][y] << " + " << B_129[x][y] << " = " << C_129[x][y] << "\t";
        }
        cout << endl;
    }

    cout << endl
         << "Matriks pengurangan : " << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C_129[x][y] = A_129[x][y] - B_129[x][y];
            cout << A_129[x][y] << " - " << B_129[x][y] << " = " << C_129[x][y] << "\t";
        }
        cout << endl;
    }

    return 0;
}
