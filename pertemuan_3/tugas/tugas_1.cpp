// #include <iostream>
// using namespace std;

// int main()
// {
//     int bilangan;
//     cout << "Masukkan Suhu: ";
//     cin >> bilangan;

//     if (bilangan <= 0)
//     {
//         cout << "Suhu " << bilangan << " derajat, berwujud es" << endl;
//     }
//     else if (bilangan > 0 or bilangan < 100)
//     {
//         cout << "Pada suhu " << bilangan << " derajat, berwujud air" << endl;
//     }
//     else
//     {
//         cout << "Suhu " << bilangan << ", berwujud udara" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    float a;
    float b;
    int pilihan;
    char huruf;
    bool selesai = false;
    float sisi, jari_jari, tinggi;
    float isi_sisi, luas_lingkaran, sisi_silinder;
    float phi = 3.14;
    cout << "1. isi kubus" << endl;
    cout << "2. luas lingkaran" << endl;
    cout << "3. isi silinder" << endl;
    cout << "masukan pilihan menu:" << endl;
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:

    {
        cout << "Rumus Hitung Kubus" << endl;
        cout << "Masukan Sisi Kubus" << endl;
        cin >> sisi;
        isi_sisi = sisi * sisi * sisi;
        cout << "isi kubus :" << isi_sisi << endl;
        break;
    }
    case 2:

        cout << "Rumus Hitung Luas Lingkaran" << endl;
        cout << "Masukan Jari-jari" << endl;
        cin >> jari_jari;
        luas_lingkaran = jari_jari * jari_jari * phi;
        cout << "luas lingkaran : " << luas_lingkaran << endl;
        break;
    case 3:

    cout << "Rumus Hitung Sisi Silinder" << endl;
    cout << "Jari-Jari" << endl;
    cin >> jari_jari;
    cout << "Tinggi Lingkaran" << endl;
    cin >> tinggi;
    sisi_silinder = phi * jari_jari * tinggi;
    cout << "Sisi Silinder :" << sisi_silinder << endl;
    break;
default:

    cout << "\n\nsalah input";

    }
    return 0;
}
