#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> nama, npm, tanggal_lahir;
    string n, np, tl;
    int pil, h;
    char t;
    bool tes = true;
    
    do {
        cout << "====Menu Data Mahasiswa====\n";
        cout << "1. Input Data Mahasiswa\n";
        cout << "2. Lihat Data Mahasiswa\n";
        cout << "3. Hapus Data Mahasiswa\n";
        cout << "4. Exit\n";
        cout << "Masukan Nomor Pilihan (1-4)   : "; 
        cin >> pil;
        system("cls");

        switch (pil) {
            case 1: 
                cin.ignore();
                cout << "Masukan Nama Mahasiswa : "; getline(cin, n);
                nama.push_back(n);

                cout << "Masukan NPM Mahasiswa : "; cin >> np;
                cin.ignore();
                npm.push_back(np);

                cout << "Masukan Tanggal Lahir : "; getline(cin, tl);
                tanggal_lahir.push_back(tl);

                cout << "\nData Telah Ditambahkan\n";
                break;

            case 2:
                for (int i = 0; i < nama.size(); i++) {
                    cout << "Data Mahasiswa ke-" << i + 1 << endl;
                    cout << "Nama             = " << nama[i] << endl;
                    cout << "NPM              = " << npm[i] << endl;
                    cout << "Tanggal Lahir    = " << tanggal_lahir[i] << endl;
                    cout << endl;
                }
                break;

            case 3:
                for (int i = 0; i < nama.size(); i++) {
                    cout << "Data Mahasiswa ke-" << i + 1 << endl;
                    cout << "Nama             = " << nama[i] << endl;
                    cout << "NPM              = " << npm[i] << endl;
                    cout << "Tanggal Lahir    = " << tanggal_lahir[i] << endl;
                    cout << endl;
                }
                cout << "\nData Mahasiswa Ke Berapa yang ingin Dihapus? (masukan angka): ";
                cin >> h;
                if (h > 0 && h <= nama.size()) {
                    nama.erase(nama.begin() + h - 1);
                    npm.erase(npm.begin() + h - 1);
                    tanggal_lahir.erase(tanggal_lahir.begin() + h - 1);
                    cout << "\nData Mahasiswa ke-" << h << " Telah Dihapus" << endl;
                } else {
                    cout << "\nNomor mahasiswa tidak valid!" << endl;
                }
                break;

            case 4:
                tes = false;
                break;

            default:
                cout << "\nPilihan tidak tersedia, kembali ke menu utama? (y/n) : ";
                cin >> t;
                tes = (t == 'y' || t == 'Y');
                break;
        }

        if (pil != 4) {
            cout << "\nKembali Ke Menu Utama? (y/n) : ";
            cin >> t;
            tes = (t == 'y' || t == 'Y');
        }
        
        system("cls");
        
    } while (tes);

    cout << "Program selesai";
}
