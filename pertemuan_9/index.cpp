// #include <iostream>
// using namespace std;

// void mahasiswi()
// {
//     string nama = "Ani";
//     cout << nama << endl;
// }

// string mahasiswa()
// {
//     string nama = "Anto";
//     return nama;
// }
// int main()
// {
//     mahasiswi();
//     cout << mahasiswa() << endl;
// }

// buatkan saya prosedur multiparameter yang berisi string nama dan int umur c++
// #include <iostream>
// using namespace std;
// void mahasiswi(string nama, int umur)
// {
//     cout << nama << " , " << umur << "Tahun" << endl;
// }
// int main()
// {
//     mahasiswi("Ani", 20);
//     mahasiswi("Yuchan", 20);
//     mahasiswi("Arden", 20);
//     mahasiswi("Hamid", 20);
// }

// buatkan saya void perulangan array dengan jumlah data ada 5 pada c++
// #include <iostream>
// using namespace std;
// void mahasiswi(int data[5])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         cout << data[i] << ",";
//     }
// }
// int main()
// {
//     int data[5] = {1, 2, 3, 4, 5};
//     mahasiswi(data);
// }

// #include <iostream>
// using namespace std;
// int mahasiswi(int x, int y)
// {
//     return (2 * x) + 10 - y;
// }
// int main()
// {
//     int z = mahasiswi(4, 7);
//     cout << z << endl;
// }

#include <iostream>
using namespace std;
bool lulus(int nilai)
{
    if (nilai > 75)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void mahasiswa(string nama, int nilai)
{
    lulus(nilai);
    cout << "nama       : " << nama << endl;
    cout << "nilai      : " << nilai << endl;
    cout << "status     : ";
    if (lulus(nilai))
    {
        cout << "lulus" << endl;
    }
    else
    {
        cout << "tidak lulus" << endl;
    }
}

int main()
{
    string nama;
    int nilai;
    cout << "masukkan nama : ";
    getline(cin, nama);
    cout << "masukkan nilai : ";
    cin >> nilai;
    mahasiswa(nama, nilai);
    return 0;
}