#include<iostream>
using namespace std;

int main(){
    system("CLS");
    string kalimat;
    int i;

    cout<<"masukkan sebuah kalimat: "; 
    getline(cin, kalimat);

    for(i = 0; i < kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]);  //fungsi toupper untuk mengapitalkan lowercase
    }
    cout<<"kalimat dalam huruf kapital: "<<kalimat<<endl;
    return 0;
}