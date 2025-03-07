#include <iostream> //header cpp
#include <conio.h> //header untuk fungsi getch() dan getche()
using namespace std;

int main (){
    string nama;
    char kom, gender;
    int nim;
    float ip;
    /*ini untuk 
    komen beberapa baris*/
    cout<<"Hello World!"<<endl;

    cout<<"masukkan nama: "; getline(cin, nama);
    cout<<"masukkan NIM: "; cin>>nim;
    cout<<"masukkan Kom: "; cin>>kom;
    cout<<"masukkan IP: "; cin>>ip;
    cout<<"masukkan gender (L/P): "; gender=getche(); //agar karakter langsung tampil tanpa tekan enter
    
    cout<<"\n\n"<<nama<<endl;
    cout<<nim<<endl;
    cout<<kom<<endl;
    cout<<ip<<endl;
    putchar(gender); //untuk menampilkan karakter

    getch(); //karakter yang diketik tdk akan ditampilkan ke layar
}