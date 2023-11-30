#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_PRODUK = 20;

struct Produk
{
    int id;
    string nama;
    string jenis;
    double harga;
};

Produk produk[MAX_PRODUK];
int jumlahBuku = 0;

void inisialisasiListBuku()
{
    produk[jumlahBuku++] = {1, "Buku A", "Jenis A", 100};
    produk[jumlahBuku++] = {2, "Buku B", "Jenis B", 150};
    produk[jumlahBuku++] = {3, "Buku C", "Jenis C", 200};
    produk[jumlahBuku++] = {4, "Buku D", "Jenis D", 250};
    produk[jumlahBuku++] = {5, "Buku E", "Jenis E", 300};
}

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

double hitungTotal(const Produk produk[], int jumlahBuku)
{
    double total = 0.0;
    for (int i = 0; i < jumlahBuku; i++)
    {
        total += produk[i].harga;
    }
    return total;
}

void hapusProduk(int id)
{
    int indeksProduk = -1;
    for (int i = 0; i < jumlahBuku; i++)
    {
        if (produk[i].id == id)
        {
            indeksProduk = i;
            break;
        }
    }

    if (indeksProduk != -1)
    {
        for (int i = indeksProduk; i < jumlahBuku - 1; i++)
        {
            produk[i] = produk[i + 1];
        }
        jumlahBuku--;

        for (int i = 0; i < jumlahBuku; i++)
        {
            produk[i].id = i + 1;
        }

        cout << "Buku berhasil dihapus." << endl;
    }
    else
    {
        cout << "Produk dengan ID " << id << " tidak ditemukan.\nSilakan cek kembali ID buku." << endl;
    }
}

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

struct Pembayaran
{
    Produk produkDibeli[MAX_PRODUK];
    int jumlahBukuDibeli;
    double totalBelanja;
    double uangDibayarkan;
    double kembalian;
};

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

    inisialisasiListBuku();

    do
    {
        cout << "\n"
             << endl;
        cout << "|===================================================|" << endl;
        cout << "|              Program Kasir Toko Buku              |" << endl;
        cout << "|===================================================|" << endl;
        cout << "| 1. Pilih Buku yang Tersedia                       |" << endl;
        cout << "| 2. Tampilkan Produk                               |" << endl;
        cout << "| 3. Hitung Total Belanja                           |" << endl;
        cout << "| 4. Edit Produk                                    |" << endl;
        cout << "| 5. Hapus Produk                                   |" << endl;
        cout << "| 6. Keluar                                         |" << endl;
        cout << "|===================================================|" << endl;
        cout << "Pilih Menu :  ";
        cin >> pilihan;

        Pembayaran pembayaran;

        switch (pilihan)
        {
        case 1:
            if (jumlahBuku < MAX_PRODUK)
            {
                cout << "\n"
                     << endl;
                cout << "|===================================================|" << endl;
                cout << "|                     Pilih Buku                    |" << endl;
                cout << "|===================================================|" << endl;
                tampilkanProduk(produk, jumlahBuku);
                int idBuku;
                cout << "Masukkan ID buku yang ingin dipilih: ";
                cin >> idBuku;

                if (idBuku >= 1 && idBuku <= jumlahBuku)
                {
                    // Periksa apakah buku sudah ada dalam struktur Pembayaran
                    bool bukuSudahDipilih = false;
                    for (int i = 0; i < pembayaran.jumlahBukuDibeli; ++i)
                    {
                        if (pembayaran.produkDibeli[i].id == idBuku)
                        {
                            bukuSudahDipilih = true;
                            break;
                        }
                    }

                    if (!bukuSudahDipilih)
                    {
                        // Menambahkan buku yang dipilih ke dalam struktur Pembayaran
                        pembayaran.produkDibeli[pembayaran.jumlahBukuDibeli++] = produk[idBuku - 1];
                        cout << "Buku berhasil dipilih." << endl;
                    }
                    else
                    {
                        cout << "Buku dengan ID " << idBuku << " sudah dipilih sebelumnya." << endl;
                    }
                }
                else
                {
                    cout << "Buku dengan ID " << idBuku << " tidak ditemukan." << endl;
                }
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
            if (pembayaran.jumlahBukuDibeli > 0)
            {
                cout << "\n"
                     << endl;
                cout << "|===================================================|" << endl;
                cout << "|                 Pembayaran Buku                   |" << endl;
                cout << "|===================================================|" << endl;

                // Menampilkan buku-buku yang telah dipilih
                tampilkanProduk(pembayaran.produkDibeli, pembayaran.jumlahBukuDibeli);

                double totalBelanja = hitungTotal(pembayaran.produkDibeli, pembayaran.jumlahBukuDibeli);
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
                    pembayaran.totalBelanja = totalBelanja;
                    pembayaran.uangDibayarkan = uangDibayarkan;
                    pembayaran.kembalian = uangDibayarkan - totalBelanja;

                    tampilkanPembayaran(pembayaran);

                    pembayaran.jumlahBukuDibeli = 0; // Reset buku yang dipilih

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
                cout << "Belum ada buku yang dipilih untuk dibayarkan. \nSilakan pilih buku terlebih dahulu." << endl;
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
            break;

        case 6:
            cout << "Terima kasih!" << endl;
            break;

        default:
            cout << "Pilihan tidak ada. Silakan coba lagi." << endl;
        }
    } while (pilihan != 6);

    return 0;
}
