#include <iostream>
#include <iomanip>
using namespace std;

// Fungsi untuk menghitung total harga
double hitungTotalHarga(int jumlah, double harga) {
    return jumlah * harga;
}

int main() {
    // Daftar menu, harga, dan ukuran
    string menu[] = {"Kopi Hitam", "Cappuccino", "Espresso", "Caffe Latte"};
    double harga[] = {15000, 20000, 25000, 22000};
    string ukuran[] = {"Small", "Medium", "Large"};
    double faktorUkuran[] = {0.8, 1.0, 1.2};
    int jumlah;
    
    // Ucapan selamat datang
    cout << "===========================================" << endl;
    cout << "  SELAMAT DATANG DI SKYLARK COFFEE SHOP " << endl;
    cout << "===========================================" << endl;

    // Menampilkan menu
    cout << "===========================================" << endl;
    cout << setw(15) << left << "Menu Coffee Shop" << setw(15) << right << "Harga" << endl;
    cout << "===========================================" << endl;
    for (int i = 0; i < 4; i++) {
        cout << setw(2) << i + 1 << ". " << setw(12) << left << menu[i] 
		<< setw(12) << right << "Rp " << harga[i] << endl;
    }
    cout << "===========================================" << endl;

    // Memilih menu
    int pilihan;
    cout << "Masukkan pilihan menu (1-4) : " ; 
    cin >> pilihan;
    cout<<"\n";

    if (pilihan < 1 || pilihan > 4) {
        cout << "Pilihan tidak valid!" << endl;
        return 0;
    }

    // Memilih ukuran kopi
    int pilihanUkuran;
    cout << "Pilih ukuran kopi (1-3):" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << ukuran[i] << endl;
    }
    cout << "Masukkan pilihan ukuran (1-3): ";
    cin >> pilihanUkuran;

    if (pilihanUkuran < 1 || pilihanUkuran > 3) {
        cout << "Pilihan ukuran tidak valid!" << endl;
        return 0;
    }

    // Memasukkan jumlah pesanan
    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlah;

    // Menghitung total harga
    double totalHarga = hitungTotalHarga(jumlah, harga[pilihan - 1] * faktorUkuran[pilihanUkuran - 1]);

    // Menampilkan total harga
    cout << "\n";
    cout << "===========================================" << endl;
    cout << "         Total Harga: Rp " << totalHarga << endl;
    cout << "===========================================" << endl;

    // Memilih metode pembayaran
    int metodePembayaran;
    cout << "\n";
    cout << "Metode Pembayaran" << endl;
    cout << "1. Tunai" << endl;
    cout << "2. Kartu Kredit" << endl;
    cout << "Pilih metode pembayaran (1-2): ";
    cin >> metodePembayaran;

    if (metodePembayaran != 1 && metodePembayaran != 2) {
        cout << "Metode pembayaran tidak valid!" << endl;
        return 0;
    }

    // Memasukkan jumlah uang pembayaran
    double pembayaran;
    cout << "Masukkan jumlah uang pembayaran: Rp ";
    cin >> pembayaran;

    if (pembayaran < totalHarga) {
        cout << "Jumlah uang pembayaran tidak cukup!" << endl;
        return 0;
    }

    // Menghitung kembalian pembayaran
    double kembalian = pembayaran - totalHarga;

    // Ucapan terima kasih
    cout << "\n";
    cout << "===========================================" << endl;
    cout << "     TERIMA KASIH TELAH BERKUNJUNG KE" << endl;
    cout << "            COFFEE SHOP KAMI" << endl;
    cout << "===========================================" << endl;

    // Menampilkan struk pembayaran
    cout << "\n";
    cout << "===========================================" << endl;
    cout << "            Struk Pembayaran" << endl;
    cout << "===========================================" << endl;
    cout << setw(10) << left << "Menu" << setw(10) << right << "Ukuran" 
	     << setw(10) << right << "Jumlah" << setw(10) << right << "Harga" << endl;
    cout << "-------------------------------------------" << endl;
    cout << setw(10) << left << menu[pilihan - 1] << setw(10) << right 
	     << ukuran[pilihanUkuran - 1] << setw(7) << right << jumlah 
		 << setw(10) << right << "Rp " << harga[pilihan - 1] * faktorUkuran[pilihanUkuran - 1] << endl;
    cout << "===========================================" << endl;
    cout << "         Total Harga: Rp " << totalHarga << endl;
    cout << "         Pembayaran : Rp " << pembayaran << endl;
    cout << "         Kembalian  : Rp " << kembalian << endl;
    cout << "===========================================" << endl;

    return 0;
}