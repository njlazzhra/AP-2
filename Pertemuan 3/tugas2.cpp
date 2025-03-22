#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    system("CLS");
    int golongan, jumlahAnak;
    float gajiPokok, pajak, tambahan, gajiTotal;
    cout << "Masukkan Golongan (1,2,3): "; cin >> golongan;
    cout << "Jumlah anak: "; cin >> jumlahAnak;
    
    gajiPokok = 0;
    tambahan = 0;
    if (golongan == 1){
        gajiPokok = 5000000;
    } 
    else if (golongan == 2){
        gajiPokok = 3000000;
    } 
    else if (golongan == 3){
        gajiPokok = 2500000;
    } 
    else{
        cout << "Golongan tidak valid."<<endl;
        return 0;
    }
    pajak = 0.05 * gajiPokok;

    if (jumlahAnak == 1 || jumlahAnak == 2){
        tambahan = jumlahAnak * 500000;
    } 
    else if (jumlahAnak > 2){
        tambahan = jumlahAnak * 750000;
    }
    else{
        tambahan = 0;
    }
    gajiTotal = gajiPokok - pajak + tambahan;

    cout<<fixed<<setprecision(0);
    cout << "Gaji total: Rp. " << gajiTotal << ",-" << endl;
    return 0;
}

