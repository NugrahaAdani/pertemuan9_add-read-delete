#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<string> nama, npm, tanggallahir;
    string n, np, tl;
    int pil, h;
    char t;
    bool tes;
    do{
        cout << "============Menu Data Mahasiswa============\n";
        cout << "1. Input Data Mahasiswa\n";
        cout << "2. Lihat Data Mahasiswa\n";
        cout << "3. Hapus Data Mahasiswa\n";
        cout << "4. Exit\n";
        cout << "Masukan Nomor Pilihan(1-4) : "; cin >> pil;
        system("cls");
        switch (pil){
            case 1:
            cin.ignore();
            cout << "Masukan Nama Mahasiswa : "; getline(cin, n);
            nama.push_back(n);
            cin.ignore();
            cout << "Masukan NPM Mahasiswa  : "; cin >> np;
            npm.push_back(np);
            cin.ignore();
            cout << "Masukan Tanggal Lahir  : "; getline(cin,tl);
            tanggallahir.push_back(tl);
            cout << "\nData Anda Telah Ditambahkan\n";
            cout << "Kembali ke menu utama?(y/n) : "; cin >> t;
            cin.ignore();
            if (t == 'y' || t == 'Y')
            {
                tes = true;
            }else if(t == 'n' || t == 'N'){
                tes = false;
            }
            system("cls");
            break;
            case 2:
            for (int i = 0; i<nama.size(); i++){
                cout << "Data Mahasiswa Ke-" << i+1 << endl;
                cout << "Nama          :" << nama[i] << endl;
                cout << "NPM           :" << npm[i] << endl;
                cout << "Tanggal Lahir :" << tanggallahir[i] << endl;
                cout << endl;
            }
            cout << "Kembali ke menu utama?(y/n) : "; cin >> t;
            cin.ignore();
            if (t == 'y' || t == 'Y')
            {
                tes = true;
            }else if(t == 'n' || t == 'N'){
                tes = false;
            }
            system("cls");
            break;
            case 3:
            for (int i = 0; i<nama.size(); i++){
                cout << "Data Mahasiswa Ke-" << i+1 << endl;
                cout << "Nama          :" << nama[i] << endl;
                cout << "NPM           :" << npm[i] << endl;
                cout << "Tanggal Lahir :" << tanggallahir[i] << endl;
                cout << endl;
            }
            cout << "\nData Mahasiswa Ke Berapa Yang Ingin Dihapus?(Masukan Angka) : ";cin >> h;

            nama.erase(nama.begin()+h-1);
            npm.erase(npm.begin()+h-1);
            tanggallahir.erase(tanggallahir.begin()+h-1);

            cout << "\nData Mahasiswa ke-" << h << "Telah Dihapus" << endl;
             cout << "Kembali ke menu utama?(y/n) : "; cin >> t;
            cin.ignore();
            if (t == 'y' || t == 'Y')
            {
                tes = true;
            }else if(t == 'n' || t == 'N'){
                tes = false;
            }
            system("cls");
            break;
            case 4:
            tes = false;
            break;
            default:
            cout << "\nPilihan Yang Anda Pilih Tidak Tersedia, Kembali ke Menu Utama?(y/n) : "; cin >> t;
            if (t == 'y' || t == 'Y')
                tes = true;
            else if (t == 'n' || t == 'N')
                tes = false;
            system("cls");
            break;
        }
    }while(tes == true);
    cout << "Program Selesai";
}
