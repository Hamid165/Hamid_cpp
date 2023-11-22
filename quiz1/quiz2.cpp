#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;

    cout << "Masukkan username: ";
    cin >> username;

    cout << "Masukkan password: ";
    cin >> password;

    if (username == "hamid" && password == "hamid")
    {
        cout << "Login berhasil!\n";

        int pilihan;
        cout << "Pilih opsi (1 atau 2): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Kamu memilih pilihan 1 \n";
            break;
        case 2:
            cout << "Kamu memilih pilihan 2 \n";
            break;
        default:
            cout << "Pilihan tidak valid. \n";
        }
    }
    else
    {
        cout << "Username atau password salah. Coba Lagi! n";
    }

    return 0;
}
