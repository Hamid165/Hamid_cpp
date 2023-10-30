#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int nilai_input129;
    int jumlah_129 = 0;

    cout << "Masukkan bilangan : ";
    cin >> nilai_input129;

    cout << "Total nilai = ";
    for (int i = nilai_input129; i >= 1; i--)
    {
        cout << i;
        jumlah_129 += i;
        if (i > 1)
        {
            cout << " + ";
        }
    }

    cout << " = " << jumlah_129 << endl;

    return 0;
}
