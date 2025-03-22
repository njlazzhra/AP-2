#include <iostream>
using namespace std;

int main(){
    system("CLS");
    float berat, tinggi, bmi;

    cout << "Masukkan berat badan anda (kg) : "; cin >> berat;
    cout << "Masukkan tinggi anda (m)       : "; cin >> tinggi;

    bmi = berat / (tinggi * tinggi);
    cout << "\nBMI anda : " << bmi << endl;
    cout << "Kategori berat badan : ";
    if (bmi < 18.5){
        cout << "Berat badan kurang" << endl;
    } 
    else if (bmi >= 18.5 && bmi < 25){
        cout << "Berat badan normal" << endl;
    } 
    else if (bmi >= 25 && bmi < 30){
        cout << "Berat badan berlebih" << endl;
    } 
    else{
        cout << "Obesitas" << endl;
    }
    return 0;
}
