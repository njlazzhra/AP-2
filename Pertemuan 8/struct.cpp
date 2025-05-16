#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct alamat{
    string jalan;
    string kota;
    int kodePos;
};

struct mahasiswa{
    string nama;
    int umur;
    float ipk;
    alamat Alamat; //nested struct
};

int main(){
    system("cls");
    mahasiswa mhs1;
    mhs1.nama = "Najla";
    mhs1.umur = 18;
    mhs1.ipk = 4.00;
    mhs1.Alamat.jalan = "Jl. Terusan Negara no. 14";
    mhs1.Alamat.kota = "Medan";
    mhs1.Alamat.kodePos = 20224;

    cout<<"Alamat = "<<mhs1.Alamat.jalan<<" " <<mhs1.Alamat.kota<< " " <<endl;
    cout<<endl;

    vector<mahasiswa> mahasiswa;
    int n;
    cout<<"Masukkan jumlah mahasiswa: "; cin>>n;
    for (int i = 0; i < n; i++){
        cout<<"Mahasiswa ke-"<<i+1<<endl;
        cin.get(); // untuk membuang newline dari input sebelumnya
        cout<<"Nama: "; getline(cin, mhs1.nama);
        cout<<"Umur: "; cin>>mhs1.umur;
        cout<<"IPK: "; cin>>mhs1.ipk;
        cin.get();
        cout<<"Jalan: "; getline(cin, mhs1.Alamat.jalan);
        cout<<"Kota: "; getline(cin, mhs1.Alamat.kota);
        cout<<"Kode Pos: "; cin>>mhs1.Alamat.kodePos;

        mahasiswa.push_back(mhs1);
    }

    for (int i = 0; i < n; i++){
        cout<<"Mahasiswa: "<<i+1<<endl;
        cout<<"Nama: "<<mahasiswa[i].nama<<endl;
        cout<<"Umur: "<<mahasiswa[i].umur<<endl;
        cout<<"IPK: "<<mahasiswa[i].ipk<<endl;
    }
}