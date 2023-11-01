#include <iostream>
using namespace std;
// soal 3 menggunakan array dan for perulangan
// untuk menampilkan semua data sesuai index
int main()
{
    string nama_129[6] = {"JOHN", "LUIS", "TOM", "ANGEL", "JONI", "MARCEL"};
    int nilai_129[6] = {90, 80, 70, 60, 50, 40};

    for (int i = 0; i < 6; i++)
    
    {
        cout << "Data ke - " << i << " = " << nama_129[i] << " dengan nilai : " << nilai_129[i] << endl;
    }
    cout << "\n";
    cout << "nama Mahasiswa : " << nama_129[2] << ", mendapatkan nilai : " << nilai_129[2] << endl;
    cout << "nama Mahasiswa : " << nama_129[5] << ", mendapatkan nilai : " << nilai_129[5] << endl;

    return 0;
}
