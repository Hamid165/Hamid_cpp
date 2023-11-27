#include <iostream>
using namespace std;

float phi = 3.14;
void keliling_luas_lingkaran(float jari)
{

    double luas = phi * jari * jari;
    double keliling = 2 * phi * jari;

    cout << "luas lingkaran = " << luas << endl;
    cout << "keliling lingkaran = " << keliling << endl;
}
float jari;

int main()
{

    cout << "masukan jari-jari : ";
    cin >> jari;

    keliling_luas_lingkaran(jari);

    return 0;
}