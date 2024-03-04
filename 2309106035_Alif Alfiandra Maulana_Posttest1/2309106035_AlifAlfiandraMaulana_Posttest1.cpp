#include <iostream>
using namespace std;

int main() {
    double rupiah, euro, yen, dollar, pilihan;
    string Nama, nama_alif = "Alif Alfiandra";
    int nim, nim_alif = 35;

    for (int i = 0; i < 3; i++) {
        cout << "Masukkan Nama anda: ";
        getline(cin, Nama);
        cout << "Masukkan NIM anda (2 digit terakhir): ";
        cin >> nim;
        cin.ignore();
        
        if (Nama == nama_alif && nim == nim_alif) {
            cout << "Login berhasil!" << endl;
            break;
            } 
        else {
            cout << "login salah" << endl;
            if (i == 2) {
                cout << "Percobaan melebihi batas" << endl;
                return 0;
                }
            }
        
        
    }
        
    

    while (true) {
        cout << "1. Rupiah ke Dollar, Euro, Yen" << endl;
        cout << "2. Dollar ke Rupiah, Euro, Yen" << endl;
        cout << "3. Euro ke Rupiah, Dollar, Yen" << endl;
        cout << "4. Yen ke Rupiah, Dollar, Euro" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan jumlah Rupiah yang akan dikonversi: ";
            cin >> rupiah;
            cout << "Dollar: " << rupiah * 0.000064 << endl;
            cout << "Euro: " << rupiah * 0.000059 << endl;
            cout << "Yen: " << rupiah * 0.0096 << endl;
        } else if (pilihan == 2) {
            cout << "Masukkan jumlah Dollar yang akan dikonversi: ";
            cin >> dollar;
            cout << "Rupiah: " << dollar / 0.000064 << endl;
            cout << "Euro: " << dollar * 0.92 << endl;
            cout << "Yen: " << dollar * 150.09 << endl;
        } else if (pilihan == 3) {
            cout << "Masukkan jumlah Euro yang akan dikonversi: ";
            cin >> euro;
            cout << "Rupiah: " << euro / 0.000059 << endl;
            cout << "Dollar: " << euro * 1.09 << endl;
            cout << "Yen: " << euro * 162.93 << endl;
        } else if (pilihan == 4) {
            cout << "Masukkan jumlah Yen yang akan dikonversi: ";
            cin >> yen;
            cout << "Rupiah: " << yen / 0.0096 << endl;
            cout << "Dollar: " << yen / 0.000064 << endl;
            cout << "Euro: " << yen / 162.93 << endl;
        } else if (pilihan == 5) {
            cout << "Terima kasih telah menggunakan program konversi mata uang." << endl;
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }

    return 0;
}
