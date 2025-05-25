#include <iostream>
#include <conio.h> //untuk membuat sourcecode memiliki fungsi spt getch(), getche(), dsb.
using namespace std;

int main(){
    int a, b, c, d, e, f, g, h;

    cout<<"Masukkan nilai A: "; cin>>a;
    cout<<"Masukkan nilai B: "; cin>>b;

    c = a & b; //and
    d = a | b; //or
    e = a^ b; //xor
    f = ~a; //negation
    g = a << b; //shift left
    h = a >> b; //shift right

    cout<<"\nProgram Bitwise"<<endl;
    cout<<"==============="<<endl;
    cout<<"Hasil dari C = A & B = "<<c<<endl;
    cout<<"Hasil dari D = A | B = "<<d<<endl;
    cout<<"Hasil dari E = A ^ B = "<<e<<endl;
    cout<<"Hasil dari F = ~A = "<<f<<endl;
    cout<<"Hasil dari G = A << B = "<<g<<endl;
    cout<<"Hasil dari H = A >> B = "<<h<<endl;
    getch(); //membaca satu karakter dari keyboard tanpa menampilkan di layar
}
