#include <iostream>
using namespace std;

int daftar_mhs[10] = {5, 8, 34, 89, 65, 3, 17, 78, 45, 87};

int main()
{
    int i;
    int maks = 0;
    for (i = 0; i < 10; i++)
    {
        if (daftar_mhs[i] > maks)
        {
            maks = daftar_mhs[i];
        }
    }
    cout << "nilai maks adalah : " << maks << endl;
    return 0;
}