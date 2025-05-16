#include<iostream>
#include<string>
using namespace std;

struct mahasiswa{
    string nama;
    int umur;
    float ipk;
};

int main(){
    system("cls");
    mahasiswa mhs1;
    mhs1.nama = "Najla";
    mhs1.umur = 18;
    mhs1.ipk = 4.00;

    // cout<<"Nama = "<<mhs1.nama<<endl;
    // cout<<"Umur = "<<mhs1.umur<<endl;
    // cout<<"IPK = "<<mhs1.ipk<<endl;

    mahasiswa *ptrmhs = &mhs1;
    cout<<"Nama = "<<ptrmhs->nama<<endl;
    cout<<"Umur = "<<ptrmhs->umur<<endl;
    cout<<"IPK = "<<ptrmhs->ipk<<endl;
}