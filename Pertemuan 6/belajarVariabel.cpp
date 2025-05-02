#include<iostream>
using namespace std;

string namaGlobal = "ilmu";
void namaVariabel(){
    string namaLokal = "komputer";
    //coba akses
    cout<<namaLokal<<endl;
    cout<<namaGlobal<<endl;
    //cout<<namaLokal<<endl; error
}
int main(){
    namaVariabel();

    //coba akses
    cout<<namaGlobal<<endl;
    //cout<<namaLokal<<endl; error, karena namaLokal adalah variabel lokal
}