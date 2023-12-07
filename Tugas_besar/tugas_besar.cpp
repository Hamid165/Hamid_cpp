#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Buku
{
    int id;
    string judul;
    string jenis;
    double harga;
    int stok;
};

void tampilkanMenu()
{
    cout << "|===================================================|" << endl;
    cout << "|              Program Kasir Toko Buku              |" << endl;
    cout << "|===========================================   ========|" << endl;
    cout << "|1. Pilih Buku dari List                            |" << endl;
    cout << "|2. Edit Buku                                       |" << endl;
    cout << "|3. Bayar Buku yang Dipilih                         |" << endl;
    cout << "|4. Tampilkan buku                                  |" << endl;
    cout << "|5. Keluar                                          |" << endl;
    cout << "|===================================================|" << endl;
    cout << "Masukan Pilihan : ";
}

void tampilkanInfoBuku(const Buku &buku)
{
    cout << "| " << setw(7) << left << buku.id << "|" << setw(36) << left << buku.judul << " | "
         << setw(13) << left << buku.jenis << "   | " << setw(7) << left << "Rp " << fixed << setprecision(2) << buku.harga
         << " | " << setw(3) << left << buku.stok << "  |" << endl;
}

void tampilkanDaftarBuku(const vector<Buku> &daftarBuku)
{
    cout << "|==========================================================================================|" << endl;
    cout << "|                                      Daftar Buku                                         |" << endl;
    cout << "|==========================================================================================|" << endl;
    cout << "| ID     | Nama Buku                           | Jenis           | Harga            | Stok |" << endl;
    cout << "|--------|-------------------------------------|-----------------|------------------|------|" << endl;
    for (const Buku &buku : daftarBuku)
    {
        tampilkanInfoBuku(buku);
    }
    cout << "|==========================================================================================|" << endl;
}
void pilihBuku(vector<Buku> &daftarBuku, vector<Buku> &bukuDipilih)
{
    cout << "|==========================================================================================|" << endl;
    cout << "|                                      Daftar Buku                                         |" << endl;
    cout << "|==========================================================================================|" << endl;
    cout << "| ID     | Nama Buku                           | Jenis           | Harga            | Stok |" << endl;
    cout << "|--------|-------------------------------------|-----------------|------------------|------|" << endl;
    for (const Buku &buku : daftarBuku)
    {
        tampilkanInfoBuku(buku);
    }
    cout << "|==========================================================================================|" << endl;
    cout << "\n";
    int pilihanBuku;
    cout << "Pilih ID buku yang ingin Anda pilih: ";
    cin >> pilihanBuku;

    bool bukuDitemukan = false;
    for (Buku &buku : daftarBuku)
    {
        if (buku.id == pilihanBuku)
        {
            if (buku.stok > 0)
            {
                cout << "|==========================================================================================|" << endl;
                cout << "|                                      Daftar Buku                                         |" << endl;
                cout << "|==========================================================================================|" << endl;
                cout << "| ID     | Nama Buku                           | Jenis           | Harga            | Stok |" << endl;
                cout << "|--------|-------------------------------------|-----------------|------------------|------|" << endl;
                tampilkanInfoBuku(buku);
                bukuDipilih.push_back(buku);
                buku.stok--;
                bukuDitemukan = true;
                cout << "|==========================================================================================|" << endl;

                break;
            }
            else
            {
                cout << "Maaf, buku ini sudah habis!" << endl;
                bukuDitemukan = true;
                break;
            }
        }
    }

    if (!bukuDitemukan)
    {
        cout << "Buku dengan ID tersebut tidak ditemukan!" << endl;
    }
}

void editBuku(vector<Buku> &daftarBuku)
{
    cout << "|==========================================================================================|" << endl;
    cout << "|                                      Daftar Buku                                         |" << endl;
    cout << "|==========================================================================================|" << endl;
    cout << "| ID     | Nama Buku                           | Jenis           | Harga            | Stok |" << endl;
    cout << "|--------|-------------------------------------|-----------------|------------------|------|" << endl;
    for (const Buku &buku : daftarBuku)
    {
        tampilkanInfoBuku(buku);
    }
    cout << "|==========================================================================================|" << endl;

    int idEdit;
    cout << "Masukkan ID buku yang akan diedit: ";
    cin >> idEdit;

    bool found = false;
    for (Buku &buku : daftarBuku)
    {
        if (buku.id == idEdit)
        {
            cout << "Masukkan judul baru: ";
            cin.ignore();
            getline(cin, buku.judul);
            cout << "Masukkan jenis baru: ";
            getline(cin, buku.jenis);
            cout << "Masukkan harga baru: ";
            cin >> buku.harga;
            cout << "Masukkan stok baru: ";
            cin >> buku.stok;
            found = true;
            cout << "Buku berhasil diubah!" << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Buku tidak ditemukan!" << endl;
    }
}

void bayarBuku(vector<Buku> &bukuDipilih)
{
    if (bukuDipilih.empty())
    {
        cout << "Silakan pilih buku terlebih dahulu sebelum melakukan pembayaran!" << endl;
        return;
    }

    double totalHarga = 0.0;
    for (const Buku &buku : bukuDipilih)
    {
        totalHarga += buku.harga;
    }
    cout << "Total harga buku yang dipilih: " << totalHarga << endl;

    double uang;
    cout << "Masukkan jumlah uang: ";
    cin >> uang;

    if (uang == totalHarga)
    {
        cout << "Pembayaran berhasil, uang pas!" << endl;
        bukuDipilih.clear();
    }
    else if (uang > totalHarga)
    {
        double kembalian = uang - totalHarga;
        cout << "Pembayaran berhasil, kembalian: " << kembalian << endl;
        bukuDipilih.clear();
    }
    else
    {
        cout << "Pembayaran gagal, uang kurang!" << endl;
    }
}

void listBuku(vector<Buku> &daftarBuku){
    daftarBuku = {
        {1, "Harry Potter and the Sorcerer's ", "Fantasi", 100000, 5},
        {2, "To Kill a Mockingbird", "Fiksi Sejarah", 150000, 7},
        {3, "The Great Gatsby", "Fiksi", 200000, 2},
        {4, "1984 ", "Fiksi Ilmiah", 250000, 4},
        {5, "The Catcher in the Rye ", "Fiksi ", 230000, 3},
        {6, "The Lord of the Rings ", "Fantasi ", 310000, 6},
        {7, "Pride and Prejudice ", "Romantis ", 150000, 3},
        {8, "The Hobbit ", "Petualangan ", 120000, 8},
        {9, "Laskar Pelangi", "Fiksi Ilmiah ", 190000, 4},
        {10, "The Hunger Games ", "Fiksi  ", 130000, 8},
    };
}
int main()
{
    vector<Buku> daftarBuku;
    vector<Buku> bukuDipilih;
    listBuku(daftarBuku);
    int menu;
    do
    {
        tampilkanMenu();
        cin >> menu;

        switch (menu)
        {
        case 1:
            pilihBuku(daftarBuku, bukuDipilih);
            break;
        case 2:
            editBuku(daftarBuku);
            break;
        case 3:
            bayarBuku(bukuDipilih);
            break;
        case 4:
            tampilkanDaftarBuku(daftarBuku);
            break;
        case 5:
            cout << "Terima kasih telah menggunakan program ini!" << endl;
            break;
        default:
            cout << "Menu tidak valid!" << endl;
        }

    } while (menu != 5);

    return 0;
}
