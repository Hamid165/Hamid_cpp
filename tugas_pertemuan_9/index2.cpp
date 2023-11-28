#include <iostream>
#include <cmath>
using namespace std;

double luas_lingkaran_129(double jari_jari)
{

    return M_PI * pow(jari_jari, 2);
}

double jari;
int main()
{
    cout << "masukan jari-jari : ";
    cin >> jari;

    cout << "luas lingkaran : " << luas_lingkaran_129(jari) << endl;

    return 0;
}