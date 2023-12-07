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

void listBuku()
{
    produk[jumlahBuku++] = {1, "Harry Potter and the Sorcerer's ", "Fantasi", 100000};
    produk[jumlahBuku++] = {2, "To Kill a Mockingbird", "Fiksi Sejarah", 150000};
    produk[jumlahBuku++] = {3, "The Great Gatsby", "Fiksi", 200000};
    produk[jumlahBuku++] = {4, "1984 ", "Fiksi Ilmiah", 250000};
    produk[jumlahBuku++] = {5, "The Catcher in the Rye ", "Fiksi Psikologis", 230000};
    produk[jumlahBuku++] = {6, "The Lord of the Rings ", "Fantasi ", 310000};
    produk[jumlahBuku++] = {7, "Pride and Prejudice ", "Romantis ", 150000};
    produk[jumlahBuku++] = {8, "The Hobbit ", "Petualangan ", 120000};
    produk[jumlahBuku++] = {9, "Brave New World ", "Fiksi Ilmiah ", 90000};
    produk[jumlahBuku++] = {10, "The Hunger Games ", "Fiksi Distopia ", 130000};
}

void tampilkanSemuaBuku(const Produk tampil[], int jumlahBuku)
{
    cout << "|=================================================================================|" << endl;
    cout << "|                              Daftar Buku                                        |" << endl;
    cout << "|=================================================================================|" << endl;
    cout << "| ID   | Nama Buku                           | Jenis            | Harga           |" << endl;
    cout << "|------|-------------------------------------|------------------|-----------------|" << endl;

    if (jumlahBuku == 0)
    {
        cout << "|                                  Belum ada buku yang ditambahkan                                    |" << endl;
    }
    else
    {
        for (int i = 0; i < jumlahBuku; i++)
        {
            cout << "| " << left << setw(4) << tampil[i].id << " | " << left << setw(35) << tampil[i].nama << " | " << left << setw(16) << tampil[i].jenis << " | Rp " << left << setw(12) << fixed << setprecision(2) << tampil[i].harga << " |" << endl;
        }
    }
    cout << "|=================================================================================|" << endl;
}

void tampilkanBukuDipilih(const Produk tampil[], int jumlahBuku)
{
    cout << "|===================================================|" << endl;
    cout << "|               Buku yang Dipilih                   |" << endl;
    cout << "|===================================================|" << endl;

    if (jumlahBuku == 0)
    {
        cout << "|       Belum ada buku yang dipilih untuk dibayar   |" << endl;
        cout << "|===================================================|" << endl;
    }
    else
    {
        for (int i = 1; i < jumlahBuku; i++)
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
    cout << "|===================================================|" << endl;
    cout << "|               Buku Yang Dipilih                   |" << endl;
    cout << "|===================================================|" << endl;

    for (int i = 0; i < pembayaran.jumlahBukuDibeli; i++)
    {
        cout << " ID : " << pembayaran.produkDibeli[i].id
             << ", Nama : " << pembayaran.produkDibeli[i].nama
             << ", Jenis : " << pembayaran.produkDibeli[i].jenis
             << " - Rp " << fixed << setprecision(2) << pembayaran.produkDibeli[i].harga << endl;
    }

    cout << "|===================================================|" << endl;

    double totalBelanja = hitungTotal(pembayaran.produkDibeli, pembayaran.jumlahBukuDibeli);
    cout << "Total belanja: Rp " << fixed << setprecision(2) << totalBelanja << endl;

    cout << "|Uang Dibayarkan: Rp " << setw(29) << fixed << setprecision(2) << pembayaran.uangDibayarkan << endl;
    cout << "|Kembalian: Rp " << setw(34) << fixed << setprecision(2) << pembayaran.kembalian << endl;
    cout << "|Terima kasih telah berbelanja di sini." << endl;
    cout << "|==================================================|" << endl;
}

int main()
{
    int pilihan;

    listBuku();

    do
    {
        cout << "\n";
        cout << "|===================================================|" << endl;
        cout << "|              Program Kasir Toko Buku              |" << endl;
        cout << "|===================================================|" << endl;
        cout << "| 1. Pilih Buku yang Tersedia                       |" << endl;
        cout << "| 2. Edit Buku                                      |" << endl;
        cout << "| 3. Hapus Buku                                     |" << endl;
        cout << "| 4. Hitung Total Belanja                           |" << endl;
        cout << "| 5. Keluar                                         |" << endl;
        cout << "|===================================================|" << endl;
        cout << "Pilih Menu :  ";
        cin >> pilihan;

        Pembayaran pembayaran;

        switch (pilihan)
        {
        case 1:
            if (jumlahBuku < MAX_PRODUK)
            {
                cout << "\n";
                tampilkanSemuaBuku(produk, jumlahBuku);
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
                        // Temukan indeks buku yang dipilih di array produk
                        int indexProdukDipilih = -1;
                        for (int i = 0; i < jumlahBuku; ++i)
                        {
                            if (produk[i].id == idBuku)
                            {
                                indexProdukDipilih = i;
                                break;
                            }
                        }

                        if (indexProdukDipilih != -1)
                        {
                            // Menambahkan buku yang dipilih ke dalam struktur Pembayaran
                            pembayaran.produkDibeli[pembayaran.jumlahBukuDibeli] = produk[indexProdukDipilih];
                            pembayaran.jumlahBukuDibeli++; // Menggunakan jumlahBukuDibeli sebagai indeks
                            cout << "Buku berhasil dipilih." << endl;
                        }
                        else
                        {
                            cout << "Buku dengan ID " << idBuku << " tidak ditemukan." << endl;
                        }
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
            cout << "\n";
            cout << "|===================================================|" << endl;
            cout << "|                   ID Edit Buku                    |" << endl;
            cout << "|===================================================|" << endl;
            int idEdit;
            cout << "Masukkan ID buku yang ingin diubah : ";
            cin >> idEdit;
            cout << "\n";
            editProduk(idEdit);
            break;

        case 3:
            cout << "\n";
            cout << "|===================================================|" << endl;
            cout << "|                    Hapus Buku                     |" << endl;
            cout << "|===================================================|" << endl;
            int idHapus;
            cout << "Masukkan ID buku yang ingin dihapus: ";
            cin >> idHapus;
            hapusProduk(idHapus);
            break;

        case 4:
            if (pembayaran.jumlahBukuDibeli == 0)
            {
                cout << "Belum ada buku yang dipilih untuk dibayar. \nSilakan pilih buku terlebih dahulu." << endl;
            }
            else
            {
                cout << "\n";
                tampilkanBukuDipilih(pembayaran.produkDibeli, pembayaran.jumlahBukuDibeli);

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
            break;

        case 5:
            cout << "Terima kasih!" << endl;
            break;

        default:
            cout << "Pilihan tidak ada. Silakan coba lagi." << endl;
        }
    } while (pilihan != 6);

    return 0;
}
