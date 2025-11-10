#include <iostream>
using namespace std;

int main(){
    int karyawan, hari, upah, total, gaji_total = 0;
    string nama;

    cout << "Masukkan jumlah karyawan: ";
    cin >> karyawan;
    cout << endl;

    for (int i = 1; i <= karyawan; i++){
        cout << "Nama           : ";
        cin >> nama;
        cout << "Hari Kerja     : ";
        cin >> hari;
        cout << "Upah per hari  : ";
        cin >> upah;

        total = upah * hari;
        cout << "Gaji total     : " << total;
        cout << endl;
        cout << endl;

        gaji_total += total;
    }
        
    cout << endl;
    cout << endl;

    cout << "Total gaji seluruh karyawan: " << gaji_total;

    cin.get();
}