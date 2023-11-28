
#include <iostream>

using namespace std;

int bilangan129(int angka129)
{
    if (angka129 % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }

    return 0;
}
int angka129;
int main()
{

    int angka129;
    cout << "Masukkan sebuah bilangan : ";
    cin >> angka129;

    int hasil = bilangan129(angka129);

    if (hasil == 0)
    {
        cout << "Bilangan yang dimasukkan adalah bilangan genap." << endl;
    }
    else
    {
        cout << "Bilangan yang dimasukkan adalah bilangan ganjil." << endl;
    }

    return 0;
}