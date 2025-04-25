#include<iostream>
#include<string>
#include<array>
using namespace std;

int main (){
    //Array Declaration & Initialization
    /* 2 cara membuat array */

    //cara 1: array kosong
    string nama[5];
    nama[0]="Najla";
    nama[1]="Az Zahra";
    nama[2]="Tanjung";
    nama[3]="Cantik";
    nama[4]="MasyaAllah";

    //cara 2; array yang langsung diisi
    //string nama[5] = {"Najla", "Az Zahra", "Tanjung", "Cantik", "MasyaAllah"};

    //Ascending Element Array
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    // Menggunakan Looping
    // for (int i = 0; i<5; i++){
    //     cout<<nama[i]<<endl;
    // }

    //Descending Element Array
    // for(int i = 0; i>=0; i--){
    //     cout<<nama[i]<<endl;
    // }

    //Multidimensional Array
    //1 3 5
    //2 4 6

    // int matrix[2][3] = {(1,3,5), (2,4,6)};
    // for(int i=0; i<2; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    // }
    // cout<<endl;

    // int matrix [4][6] = {
    //     {1, 2, 3, 4, 5, 6},
    //     {7, 8, 9, 10, 11, 12},
    //     {13, 14, 15, 16, 17, 18},
    //     {19, 20, 21, 22, 23, 24};
    // }

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<6; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    //String (Array of Characters)
    // string nama = "Najla";
    // // cout<<nama[0]<<endl;
    // // cout<<nama[4]<<endl;

    // for (int i = 0; i < nama.length(), i++){
    //     cout<<nama[i]<<endl;
    // }

    string s1 = "Hello";
    string s2 = "World!";

    // s1 = s2;
    // cout<<"s1 = "<<s1<<endl;

    //s1 = s1 = s2;
    // s1 = "Hello";
    // cout<<"Hasil: "<<s1 + s2<<endl;

    //s1.length()
    // cout<<s1.length()<<endl;
    // cout<<(s1 + s2).length()<<endl;

    //s1.substr(n, m)
    // cout<<s1.substr(2,3)<<endl;
    // cout<<(s1+s2).substr(5,3)<<endl;

    //operator sizeof
    // int angka = 10;
    // cout<<sizeof(angka);

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout<<sizeof(nilai);

    // string s = "Najla";
    // cout<<sizeof(s)<<endl; 

    //Array Library
    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
    // cout<<"Nilai: ";

    // for (int i = 0; i < nilai.size(); i++){
    //     cout<<nilai[i]<<" ";
    // }

    // for(float n: nilai){
    //     cout<<n<<" ";
    // }
}