#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_PRODUK = 20;

// Struktur untuk menyimpan informasi produk dari buku
struct Produk
{
    int id;
    string nama;
    string jenis;
    double harga;
};

Produk produk[MAX_PRODUK];
int jumlahBuku = 0;

// Struktur untuk menyimpan detail pembayaran
struct Pembayaran
{
    Produk produkDibeli[MAX_PRODUK];
    int jumlahBukuDibeli;
    double totalBelanja;
    double uangDibayarkan;
    double kembalian;
};

// Prosedure untuk menampilkan produk
void tampilkanProduk(const Produk tampil[], int jumlahBuku)
{
    cout << "|===================================================|" << endl;
    cout << "|              Daftar Buku Ditambahkan              |" << endl;
    cout << "|===================================================|" << endl;
    if (jumlahBuku == 0)
    {
        cout << "|           Belum ada buku yang ditambahkan         |" << endl;
        cout << "|===================================================|" << endl;
    }
    else
    {
        for (int i = 0; i < jumlahBuku; i++)
        {
            cout << " ID : " << tampil[i].id << ", Nama : " << tampil[i].nama << ", Jenis : " << tampil[i].jenis << " - Rp " << fixed << setprecision(2) << tampil[i].harga << endl;
        }
        cout << "|===================================================|" << endl;
    }
}

// Fungsi untuk menghitung total belanja
double hitungTotal(const Produk produk[], int jumlahBuku)
{
    double total = 0.0;
    for (int i = 0; i < jumlahBuku; i++)
    {
        total += produk[i].harga;
    }
    return total;
}

// Fungsi untuk menghapus produk
void hapusProduk(int id)
{
    for (int i = 0; i < jumlahBuku; i++)
    {
        if (produk[i].id == id)
        {
            for (int j = i; j < jumlahBuku - 1; j++)
            {
                produk[j] = produk[j + 1];
            }
            jumlahBuku--;

            // Set ulang ID produk
            for (int k = 0; k < jumlahBuku; k++)
            {
                produk[k].id = k + 1;
            }

            cout << "Buku berhasil dihapus." << endl;
            return;
        }
    }
    cout << "Produk dengan ID " << id << " tidak ditemukan.\nSilakan cek kembali ID buku." << endl;
}

// Prosedure untuk mengedit produk
void editProduk(int id)
{
    for (int i = 0; i < jumlahBuku; i++)
    {
        if (produk[i].id == id)
        {
            cout << "|==================================================|" << endl;
            cout << "|                    Edit Buku                     |" << endl;
            cout << "|==================================================|" << endl;
            cout << "Masukkan Judul Buku : ";
            cin.ignore();
            getline(cin, produk[i].nama);
            cout << "Masukkan Jenis Buku : ";
            getline(cin, produk[i].jenis);
            cout << "Masukkan harga Buku : ";
            cin >> produk[i].harga;
            cout << "Buku berhasil diubah." << endl;
            return;
        }
    }
    cout << "Buku dengan ID " << id << " tidak ditemukan.\nSilakan cek kembali ID buku" << endl;
}

// Prosedure untuk menampilkan struktur pembayaran
void tampilkanPembayaran(const Pembayaran &pembayaran)
{
    cout << "=============== Struktur Pembayaran ===============|" << endl;
    cout << "|==================================================|" << endl;
    cout << "|               Produk yang Dibeli                 |" << endl;
    cout << "|==================================================|" << endl;

    for (int i = 0; i < pembayaran.jumlahBukuDibeli; i++)
    {
        cout << "|Nama: " << setw(20) << left << pembayaran.produkDibeli[i].nama << endl;
        cout << "|Jenis: " << setw(15) << left << pembayaran.produkDibeli[i].jenis << endl;
        cout << "|Harga: Rp " << fixed << setprecision(2) << pembayaran.produkDibeli[i].harga << endl;
    }

    cout << "|==================================================|" << endl;
    cout << "|Total Belanja: Rp " << setw(32) << fixed << setprecision(2) << pembayaran.totalBelanja << endl;
    cout << "|Uang Dibayarkan: Rp " << setw(29) << fixed << setprecision(2) << pembayaran.uangDibayarkan << endl;
    cout << "|Kembalian: Rp " << setw(34) << fixed << setprecision(2) << pembayaran.kembalian << endl;
    cout << "|Terima kasih telah berbelanja di sini." << endl;
    cout << "|==================================================|" << endl;

}

int main()
{
    int pilihan;

    do
    {
        cout << "\n"
             << endl;
        cout << "|===================================================|" << endl;
        cout << "|              Program Kasir Toko Buku              |" << endl;
        cout << "|===================================================|" << endl;
        cout << "| 1. Tambah Produk                                  |" << endl;
        cout << "| 2. Tampilkan Produk                               |" << endl;
        cout << "| 3. Hitung Total Belanja                           |" << endl;
        cout << "| 4. Edit Produk                                    |" << endl;
        cout << "| 5. Hapus Produk                                   |" << endl;
        cout << "| 6. Keluar                                         |" << endl;
        cout << "|===================================================|" << endl;
        cout << "Pilih Menu :  ";
        cin >> pilihan;

        // Struktur pembayaran baru
        Pembayaran pembayaran;

        switch (pilihan)
        {
        case 1:
            if (jumlahBuku < MAX_PRODUK)
            {
                cout << "\n"
                     << endl;
                cout << "|===================================================|" << endl;
                cout << "|                     Tambah Buku                   |" << endl;
                cout << "|===================================================|" << endl;
                cout << "Masukkan Nama Buku: ";
                cin.ignore();
                getline(cin, produk[jumlahBuku].nama);
                cout << "Masukkan Jenis Buku: ";
                getline(cin, produk[jumlahBuku].jenis);
                cout << "Masukkan Harga Buku: ";
                cin >> produk[jumlahBuku].harga;
                // ID dimulai dari 1
                produk[jumlahBuku].id = jumlahBuku + 1;
                jumlahBuku++;
                cout << "Buku berhasil ditambahkan." << endl;
            }
            else
            {
                cout << "Jumlah buku telah mencapai batas maksimal." << endl;
            }
            break;

        case 2:
            cout << "\n"
                 << endl;
            cout << "|===================================================|" << endl;
            cout << "|                  Tampilkan Buku                   |" << endl;
            cout << "|===================================================|" << endl;
            tampilkanProduk(produk, jumlahBuku);
            break;
        case 3:
            if (jumlahBuku > 0)
            {
                cout << "\n"
                     << endl;
                cout << "|===================================================|" << endl;
                cout << "|                 Pembayaran Buku                   |" << endl;
                cout << "|===================================================|" << endl;
                tampilkanProduk(produk, jumlahBuku);
                double totalBelanja = hitungTotal(produk, jumlahBuku);
                cout << "Total belanja: Rp " << fixed << setprecision(2) << totalBelanja << endl;

                double uangDibayarkan;
                cout << "Masukkan jumlah uang yang dibayarkan: Rp ";
                cin >> uangDibayarkan;

                if (uangDibayarkan < totalBelanja)
                {
                    cout << "Uang yang dibayarkan kurang. Transaksi dibatalkan." << endl;
                }
                else
                {
                    Pembayaran pembayaran;
                    pembayaran.jumlahBukuDibeli = jumlahBuku;
                    for (int i = 0; i < jumlahBuku; i++)
                    {
                        pembayaran.produkDibeli[i] = produk[i];
                    }
                    pembayaran.totalBelanja = totalBelanja;
                    pembayaran.uangDibayarkan = uangDibayarkan;
                    pembayaran.kembalian = uangDibayarkan - totalBelanja;

                    tampilkanPembayaran(pembayaran);

                    jumlahBuku = 0;

                    cout << "Ingin berbelanja lagi? (1=Ya, 6=Keluar): ";
                    cin >> pilihan;
                    if (pilihan != 1)
                    {
                        cout << "Terima kasih! Program selesai." << endl;
                    }
                }
            }
            else
            {
                cout << "Belum ada buku yang ditambahkan untuk dibayarkan. \nSilakan tambahkan buku terlebih dahulu." << endl;
            }
            break;

        case 4:
            cout << "\n"
                 << endl;
            cout << "|===================================================|" << endl;
            cout << "|                   ID Edit Buku                    |" << endl;
            cout << "|===================================================|" << endl;
            int idEdit;
            cout << "Masukkan ID buku yang ingin diubah : ";
            cin >> idEdit;
            cout << "\n"
                 << endl;
            editProduk(idEdit);
            break;

            break;
        case 5:
            cout << "\n"
                 << endl;
            cout << "|===================================================|" << endl;
            cout << "|                    Hapus Buku                     |" << endl;
            cout << "|===================================================|" << endl;
            int idHapus;
            cout << "Masukkan ID buku yang ingin dihapus: ";
            cin >> idHapus;
            hapusProduk(idHapus);
        case 6:
            cout << "Terima kasih!" << endl;
            break;
        default:
            cout << "Pilihan tidak ada. Silakan coba lagi." << endl;
        }
    } while (pilihan != 6);

    return 0;
}
