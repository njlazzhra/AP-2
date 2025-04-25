#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Vector Declaration & Initialization
    vector<string> nama_karyawan = {"Ali", "Budi", "Cici", "Doni"};

    //Ascending Element of Vector
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout<<nama_karyawan[i]<<" ";
    // }

    // for (string karyawan: nama_karyawan){
    //     cout<<karyawan<<endl;
    // }

    //Add Data to Vector
    // nama_karyawan.push_back("Imam");
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //         cout<<nama_karyawan[i]<<" ";
    //     }

    //Delete Data from Vector
    nama_karyawan.pop_back("Imam");
    nama_karyawan.erase(nama_karyawan.begin() + 3);
    for (int i = 0; i < nama_karyawan.size(); i++){
            cout<<nama_karyawan[i]<<" ";
        }
    

}

