#include <iostream>
#include <cmath>
using namespace std;

double luas_lingkaran(double jari_jari)
{

    return M_PI * pow(jari_jari, 2);
}

double keliling_lingkaran(double jari)
{
    return 2 * M_PI * jari;
}
double jari;
int main()
{
    cout << "masukan jari-jari : ";
    cin >> jari;

    cout << "luas lingkaran : " << luas_lingkaran(jari) << endl;
    cout << "keliling lingkaran : " << keliling_lingkaran(jari) << endl;

    return 0;
}