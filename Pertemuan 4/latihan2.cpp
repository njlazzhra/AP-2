#include<iostream>
using namespace std;

int main(){
    system("CLS");
    string kalimat;
    int i;
    
    cout<<"masukkan sebuah kalimat: "; 
    getline(cin, kalimat);
    
    for(i = 0; i < kalimat.length(); i++){
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u')
        kalimat[i] = toupper(kalimat[i]);  //fungsi toupper untuk mengapitalkan lowercase
    }
    cout<<"kalimat dalam huruf kapital: "<<kalimat<<endl;
    return 0;
}