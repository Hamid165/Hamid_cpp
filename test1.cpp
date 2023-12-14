#include <iostream>
#include <string>
using namespace std;

// Deklarasi struktur untuk tiket
struct Tiket
{
    string tujuan;       // variabel tujuan
    string kelasTiket;   // variabel kelas
    int harga;           // variabel harga
    int jumlahTersedia;  // variabel jumlah tersedia
    int jumlahTiketAwal; // variabel agar jumlah tiket kembali ke semula
};

// Menampilkan menu
void tampilkanMenu()
{
    cout << "|====================================================================|" << endl;
    cout << "|       PROGRAM PEMESANAN TIKET BUS EFISIENSI                        |" << endl;
    cout << "|====================================================================|" << endl;
    cout << "| 1. Tampilkan Semua Tiket Bus                                       |" << endl;
    cout << "| 2. Pesan Tiket Bus                                                 |" << endl;
    cout << "| 3. Cari Tiket Bus                                                  |" << endl;
    cout << "| 4. Hapus data penumpang                                            |" << endl;
    cout << "| 5. Cancel data penumpang                                           |" << endl;
    cout << "| 6. Keluar                                                          |" << endl;
    cout << "|====================================================================|" << endl;
    cout << "Pilih opsi (1-6): ";
}

// Prosedur untuk menampilkan semua tiket
void tampilkanSemuaTiket(Tiket *tikets, int jumlahTiket)
{
    cout << "|====================================================================|" << endl;
    cout << "|==================== Daftar Tiket Bus Efisiensi ====================|" << endl;
    cout << "|====================================================================|" << endl;
    for (int i = 0; i < jumlahTiket; i++)
    {
        cout << "|Tujuan: " << tikets[i].tujuan << " - Kelas: " << tikets[i].kelasTiket << endl;
        cout << "|Jumlah Tersedia: " << tikets[i].jumlahTersedia << endl;
        cout << "|====================================================================|" << endl;
    }
}

#include <iomanip> //buat ngeset tataletak

// Prosedur Pemesanan tiket
void pesanTiket(Tiket *tikets, int jumlahTiket, string *namaPenumpang)
{
    string tujuan;
    int jumlahPesanan;
    string namaPenumpangTiket;
    string kelasTiket; // Variabel untuk menyimpan kelas tiket

    cout << "========================================" << endl;
    cout << "| Masukkan nama penumpang: " << setw(9) << left << "| ";
    cin.ignore();
    getline(cin, namaPenumpangTiket);

    cout << "| Masukkan tujuan: " << setw(9) << left << "| ";
    cin >> tujuan;

    // Penggunaan pointer dan array tiket
    Tiket *tiketDipesan = nullptr; // pointer tiket
    for (int i = 0; i < jumlahTiket; i++)
    { // array tiket
        if (tikets[i].tujuan == tujuan)
        {                                          // array tiket
            tiketDipesan = &tikets[i];             // array tiket
            namaPenumpang[i] = namaPenumpangTiket; // Set nama penumpang di dalam array
            break;
        }
    }

    if (tiketDipesan != nullptr)
    {
        cout << "========================================" << endl;
        cout << "| Harga tiket untuk tujuan " << setw(20) << left << tujuan << "|"
             << "Kelas: " << setw(10) << left << tiketDipesan->kelasTiket << "|" << endl;
        cout << "|=======================================|" << endl;
        cout << "| Jumlah tiket yang ingin dipesan: " << setw(8) << left << "| ";
        cin >> jumlahPesanan;

        if (jumlahPesanan <= tiketDipesan->jumlahTersedia)
        {
            tiketDipesan->jumlahTersedia -= jumlahPesanan;
            cout << "| Pemesanan berhasil." << setw(22) << left << "|"
                 << "Total harga: Rp " << (jumlahPesanan * tiketDipesan->harga) << " |" << endl;
            cout << "| Tiket berhasil dipesan oleh: " << setw(11) << left << namaPenumpangTiket << "| " << endl;
        }
        else
        {
            cout << "| Maaf, tiket tidak tersedia dalam jumlah yang diminta." << setw(1) << left << "|" << endl;
        }
    }
    else
    {
        cout << "| Tiket untuk tujuan " << setw(23) << left << tujuan << "| "
             << "tidak ditemukan." << setw(21) << left << "|" << endl;
    }

    // Pembayaran inputan duit pengguna
    int totalHarga = jumlahPesanan * tiketDipesan->harga;
    int jumlahUang;
    cout << "| Masukkan jumlah uang yang dibayarkan: " << setw(7) << left << "| ";
    cin >> jumlahUang;

    if (jumlahUang < totalHarga)
    {
        cout << "| Maaf, pembayaran tidak cukup." << setw(35) << left << "| " << endl;
        cout << "| Mohon periksa kembali uang Anda." << setw(30) << left << "| " << endl;
    }
    else
    {
        int kembalian = jumlahUang - totalHarga;
        cout << "| Pembayaran berhasil." << setw(33) << left << "| "
             << "Kembalian: Rp " << kembalian << setw(8) << left << "|" << endl;
    }
    cout << "========================================" << endl;
}

// Prosedur untuk mencari tiket
void cariTiket(Tiket *tikets, int jumlahTiket, string *namaPenumpang)
{
    string tujuan;
    cout << "========================================" << endl;
    cout << "| Masukkan tujuan yang ingin dicari: " << setw(6) << left << "| ";
    cin >> tujuan;

    for (int i = 0; i < jumlahTiket; i++)
    { // perulangan for
        if (tikets[i].tujuan == tujuan)
        {
            cout << "| Informasi Tiket:" << setw(32) << left << "| " << endl;
            cout << "| Tujuan: " << setw(28) << left << tujuan << "|" << endl;
            cout << "| Nama Penumpang: " << setw(23) << left << namaPenumpang[i] << "|" << endl;
            cout << "| Harga: Rp " << setw(28) << left << tikets[i].harga << "|" << endl;
            cout << "| Jumlah Tersedia: " << setw(21) << left << tikets[i].jumlahTersedia << "|" << endl;
            cout << "|=======================================|" << endl;
            return;
        }
    }

    cout << "| Tiket untuk tujuan " << setw(23) << left << tujuan << "| "
         << "tidak ditemukan." << setw(21) << left << "|" << endl;
    cout << "========================================" << endl;
}

// Prosedur untuk menghapus data Penumpang
void hapusDataPenumpang(string *namaPenumpang, Tiket *tikets, int jumlahTiket, string tujuan)
{
    string namaPenumpangHapus;
    for (int i = 0; i < jumlahTiket; i++)
    {
        if (tikets[i].tujuan == tujuan)
        {
            namaPenumpang[i] = "";
            tikets[i].jumlahTersedia = tikets[i].jumlahTiketAwal; // membalikkan jumlah tiket
        }
    }
    cout << "========================================" << endl;
    cout << "Data penumpang untuk tujuan " << tujuan << " berhasil dihapus." << endl;
    cout << "========================================" << endl;
}
// Prosedur untuk cancel pemesanan tiket
// Fungsi untuk membatalkan pesanan berdasarkan nama penumpang dan tujuan
void cancelPesanan(string *namaPenumpang, Tiket *tikets, int jumlahTiket, string tujuan)
{
    string namaPenumpangCancel;
    cout << "Masukkan Nama Penumpang untuk cancel pesanan tiket: ";

    cin >> namaPenumpangCancel;

    for (int i = 0; i < jumlahTiket; i++)
    {
        if (tikets[i].tujuan == tujuan && namaPenumpang[i] == namaPenumpangCancel)
        {
            if (namaPenumpang[i] != "")
            {
                namaPenumpang[i] = "";
                tikets[i].jumlahTersedia = tikets[i].jumlahTiketAwal;
                cout << "|==============================================|" << endl;
                cout << "|          Pesanan Tiket Dibatalkan            |" << endl;
                cout << "|==============================================|" << endl;
                cout << "| Tujuan          | " << setw(20) << left << tikets[i].tujuan << " |" << endl;
                cout << "| Nama Penumpang  | " << setw(20) << left << namaPenumpangCancel << " |" << endl;
                cout << "|==============================================|" << endl;
            }
            else
            {
                cout << "|==============================================|" << endl;
                cout << "|   Tidak ada pesanan tiket untuk tujuan ini   |" << endl;
                cout << "|==============================================|" << endl;
            }
            return;
        }
    }

    cout << "|==============================================|" << endl;
    cout << "|   Tidak ada pesanan tiket untuk tujuan ini   |" << endl;
    cout << "|==============================================|" << endl;
}
// Penggunaan array tiket
int main()
{
    int jumlahTiket = 12; // Tambahkan jumlah tiket eksklusif dan ekonomi
    Tiket tikets[jumlahTiket] = {
        {"Cilacap-Jogja", "Ekonomi", 100000, 100, 100},
        {"Jakarta-Cilacap", "Eksekutif", 500000, 50, 50},
        {"Jogja-Jakarta", "Ekonomi", 300000, 75, 75},
        {"Banyumas-Bogor", "Eksekutif", 250000, 25, 25},
        {"Purwokerto-Jogja", "Ekonomi", 100000, 100, 100},
        {"Semarang-Purwokerto", "Eksekutif", 150000, 25, 25},
        {"Bandung-Jakarta", "Ekonomi", 70000, 50, 50},
        {"Bali-Banyuwangi", "Eksekutif", 300000, 75, 75},
        {"Surabaya-Malang", "Ekonomi", 100000, 25, 25},
        {"Surabaya-Jogja", "Eksekutif", 150000, 15, 15},
        {"Surabaya-Bali", "Eksekutif", 500000, 10, 10},
        {"Bali-Jakarta", "Eksekutif", 120000, 20, 20}};
    string namaPenumpang[12];
    // vector<Pesanan> pesanan;
    // menggunakan looping do while
    int pilihan;
    do
    {
        tampilkanMenu();
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
        {
            tampilkanSemuaTiket(tikets, jumlahTiket);
            break;
        }
        case 2:
        {
            string kelasTiket; // Deklarasi variabel kelasTiket
            cout << "Masukkan kelas tiket (Ekonomi/Eksekutif): ";
            cin >> kelasTiket;

            // Validasi kelas tiket
            if (kelasTiket != "Ekonomi" && kelasTiket != "Eksekutif")
            {
                cout << "Kelas tiket tidak valid." << endl;
                break;
            }

            pesanTiket(tikets, jumlahTiket, namaPenumpang);
            break;
        }
        case 3:
        {
            cariTiket(tikets, jumlahTiket, namaPenumpang);
            break;
        }
        case 4:
        {
            string tujuanHapus;
            cout << "Masukkan tujuan untuk menghapus data penumpang: ";
            cin >> tujuanHapus;
            hapusDataPenumpang(namaPenumpang, tikets, jumlahTiket, tujuanHapus);
            break;
        }
        case 5:
        {
            string tujuanCancel;
            cout << "Masukkan tujuan untuk cancel pesanan tiket: ";
            cin >> tujuanCancel;
            cancelPesanan(namaPenumpang, tikets, jumlahTiket, tujuanCancel);
            break;
        }
        }
    } while (pilihan != 6);

    return 0;
}