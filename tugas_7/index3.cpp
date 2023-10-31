#include <iostream>
using namespace std;

int main()
{
    int int_129[5] = {1, 2, 3, 4, 5};
    int bilangan_129;

    cout << "Masukkan bilangan : ";
    cin >> bilangan_129;

    for (int i = 0; i < 5; i++)
    {
        if (int_129[i] == bilangan_129)
        {

            cout << "Bilangan anda tersimpan di urutan array ke " << i + 1 << endl;
            return 0;
        }
    }

    cout << "Bilangan tidak ditemukan dalam array." << endl;

    return 0;
}
