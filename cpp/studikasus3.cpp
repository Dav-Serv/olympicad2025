#include <iostream>
using namespace std;

int main(){
    int mahasiswa, nilai, jumlah = 0, rata, i = 1;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> mahasiswa;
    cout << endl;

    for(i; i <= mahasiswa; i++){
        cout << "Nilai mahasiswa ke-" << i << ": ";
        cin >> nilai;

        jumlah += nilai;
    }
    cout << endl;

    cout << "Jumlah nilai: " << jumlah << endl;
    rata = jumlah / i;
    cout << "Rata-rata nilai: " << rata;
    cin.get();
}