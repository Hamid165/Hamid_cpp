#include <iostream>
using namespace std;

int main()
{
    int bilangan_129, ganjil_129[5];
    int j = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukan bilangan " << (i + 1) << " : ";
        cin >> bilangan_129;

        if (bilangan_129 % 2 != 0)
        {
            ganjil_129[j] = bilangan_129;
            j++;
        }
    }

    cout << "Bilangan yang ganjil adalah " << endl;
    for (int i = 0; i < j; i++)
    {
        cout << ganjil_129[i];
        if (i < j - 1)
        {
            cout << endl;
        }
    }

    return 0;
}
