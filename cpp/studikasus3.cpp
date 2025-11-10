#include <iostream>
using namespace std;

int main(){
    int mahasiswa, nilai, jumlah = 0, rata;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> mahasiswa;
    cout << endl;

    for(int i = 1; i <= mahasiswa; i++){
        cout << "Nilai mahasiswa ke-" << i << ": ";
        cin >> nilai;

        jumlah += nilai;
    }
    cout << endl;

    cout << "Jumlah nilai: " << jumlah << endl;
    rata = jumlah / mahasiswa;
    cout << "Rata-rata nilai: " << rata;
    cin.get();
}