#include <iostream>
using namespace std;

int main()
{
    int bil1_129, bil2_129, awal_bil1_129, awal_bil2_129;
    int sisa;
    cout << "Masukkan bilangan pertama = ";
    cin >> bil1_129;
    cout << "Masukkan bilangan kedua = ";
    cin >> bil2_129;

    awal_bil1_129 = bil1_129;
    awal_bil2_129 = bil2_129;

    if (bil1_129 < bil2_129)
    {
        int temp = bil1_129;
        bil1_129 = bil2_129;
        bil2_129 = temp;
    }
    do
    {
        sisa = bil1_129 % bil2_129;
        bil1_129 = bil2_129;
        bil2_129 = sisa;
    } while (sisa != 0);

    int kpk = (awal_bil1_129 * awal_bil2_129) / bil1_129;

    cout << "\nKelipatan Persekutuan Terkecil : " << kpk << endl;

    return 0;
}
