#include<iostream>
using namespace std;

int main(){
    system("CLS");
    string kalimat;
    int i;

    cout<<"masukkan sebuah kalimat: "; 
    getline(cin, kalimat); //untuk membaca input yang memiliki lebih dari satu karakter

    for(i = 0; i < kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]);  //fungsi toupper untuk mengapitalkan lowercase
    }
    cout<<"kalimat dalam huruf kapital: "<<kalimat<<endl;
    return 0;
}