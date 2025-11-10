#include <iostream>

using namespace std;

int main(){
    int total_belanja, total_bayar, diskon;

    cout << "===Program Toko===" << endl;
    cout << "Masukkan total belanja: ";
    cin >> total_belanja;

    if (total_belanja >= 100000){
        diskon = total_belanja * 0.1;
        total_bayar = total_belanja - diskon; 
    } else if (total_belanja >= 500000){
        diskon = total_belanja * 0.2;
        total_bayar = total_belanja - diskon;
    }else{
        diskon = 0;
        total_bayar = total_belanja;
    }

    cout << endl;
    cout << "Total Belanja  : Rp." << total_belanja << endl;
    cout << "Diskon         : Rp." << diskon << endl;
    cout << "Total Bayar    : Rp." << total_bayar << endl;
}