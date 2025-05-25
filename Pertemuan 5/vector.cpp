#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Vector Declaration & Initialization
    vector<string> nama_karyawan = {"Ali", "Budi", "Cici", "Doni"};

    //Ascending Element of Vector, yaitu membuat vector menjadi berurut sesuai keinginan user
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout<<nama_karyawan[i]<<" ";
    // }

    // for (string karyawan: nama_karyawan){
    //     cout<<karyawan<<endl;
    // }

    //Add Data to Vector, yaitu untuk menambahkan data ke suatu vector
    // nama_karyawan.push_back("Imam"); //untuk menambah elemen baru ke dalam vector
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //         cout<<nama_karyawan[i]<<" ";
    //     }

    //Delete Data from Vector, yaitu untuk menghapus suatu data dalam vector
    nama_karyawan.pop_back("Imam"); //untuk menghapus elemen terakhir dalam vector
    nama_karyawan.erase(nama_karyawan.begin() + 3); //untuk menghapus elemen tertentu dalam vector
    for (int i = 0; i < nama_karyawan.size(); i++){
            cout<<nama_karyawan[i]<<" ";
        }
    

}

