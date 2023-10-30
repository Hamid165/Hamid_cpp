#include <iostream>
using namespace std;

int main()
{
    int nilai_129;
    int pangkat_129;

    cout << "Masukkan bilangan: ";
    cin >> nilai_129;

    cout << "Masukkan pecahan : ";
    cin >> pangkat_129;

    int hasil_129 = 1;

    for (int i = 0; i < pangkat_129; i++)
    {
        hasil_129 *= nilai_129;
    }

    cout << "hasil pangkat : " << hasil_129 << endl;

    return 0;
}
