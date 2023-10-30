#include <iostream>
using namespace std;

int main()
{
    int pilihan;

    cout << "1. huruf vokal" << endl;
    cout << "2. Pembagian" << endl;
    cout << "3. Penyakit" << endl;
    cout << "Masukkan pilihan menu: ";
    cin >> pilihan;

    if (pilihan == 1)
    {
        char huruf;
        cout << "Masukkan huruf: ";
        cin >> huruf;

        switch (huruf)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << huruf << " adalah huruf vokal." << endl;
            break;
        default:
            cout << huruf << " adalah huruf bukan vokal." << endl;
            break;
        }
    }
    else if (pilihan == 2)
    {
        float a, b;
        cout << "Masukkan bilangan yang akan dibagi: ";
        cin >> a;
        cout << "Masukkan bilangan pembagi: ";
        cin >> b;

        if (b != 0)
        {
            float hasil = a / b;
            cout << "Hasil Bagi: " << hasil << endl;
        }
        else
        {
            cout << "Pembagian dengan nol tidak valid." << endl;
        }
    }
    else if (pilihan == 3)
    {
        int menu;
        cout << "Menu Menghitung Biaya operasi" << endl;
        cout << "1. Mata" << endl;
        cout << "2. Jantung" << endl;
        cout << "Masukkan menu: ";
        cin >> menu;

        if (menu == 1)
        {
            cout << "Jenis penyakit mata" << endl;
            cout << "1. Katarak" << endl;
            cout << "2. Plus/minus" << endl;
            cout << "3. Silinder" << endl;
            cout << "Masukkan jenis penyakit mata: ";
        }
        else if (menu == 2)
        {
            cout << "Jenis penyakit jantung" << endl;
            cout << "4. Jantung koroner" << endl;
            cout << "5. Katup jantung" << endl;
            cout << "6. Otot jantung" << endl;
            cout << "Masukkan jenis penyakit jantung: ";
        }

        int penyakit;
        cin >> penyakit;

        if (menu == 1 && (penyakit >= 1 && penyakit <= 3))
        {
            switch (penyakit)
            {
            case 1:
                cout << "Biaya operasi mata Katarak: Rp. 7.500.000" << endl;
                break;
            case 2:
                cout << "Biaya operasi mata Plus/minus: Rp. 5.000.000" << endl;
                break;
            case 3:
                cout << "Biaya operasi mata Silinder: Rp. 4.000.000" << endl;
                break;
            default:
                cout << "Jenis penyakit tidak valid." << endl;
                break;
            }
        }
        else if (menu == 2 && (penyakit >= 4 && penyakit <= 6))
        {
            switch (penyakit)
            {
            case 4:
                cout << "Biaya operasi jantung koroner: Rp. 500.000.000" << endl;
                break;
            case 5:
                cout << "Biaya operasi katup jantung: Rp. 350.000.000" << endl;
                break;
            case 6:
                cout << "Biaya operasi otot jantung: Rp. 450.000.000" << endl;
                break;
            default:
                cout << "Jenis penyakit tidak valid." << endl;
                break;
            }
        }
        else
        {
            cout << "Menu yang Anda masukkan tidak valid." << endl;
        }
    }
    else
    {
        cout << "Menu yang Anda masukkan tidak valid." << endl;
    }

    return 0;
}
