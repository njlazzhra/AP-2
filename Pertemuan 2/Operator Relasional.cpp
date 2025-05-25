#include <iostream>
#include <conio.h>
using namespace std;

int main(){
float a,b,c,d,e,f,x,y;

cout<<"Masukkan nilai X: "; cin >> x;
cout << "Masukkan nilai Y: "; cin >> y; 

a= x==y; //sama dengan
b= x!=y; //tidak sama dengan
c = x > y; //lebih besar
d = x < y; //lebih kecil
e = x >=y; //lebih besar sama dengan
f = x <= y; //lebih kecil sama dengan

cout<<endl;
cout<<"Hasil dari " << x << "==" << y << "=" << a << endl;
cout<<"Hasil dari " << x << "!=" << y << "=" << b << endl;
cout<<"Hasil dari " << x << ">" << y << "=" << c << endl;
cout<<"Hasil dari " << x << "<" << y << "=" << d << endl;
cout<<"Hasil dari " << x << ">=" "=" << e << endl;
cout<<"Hasil dari " << x << "<=" << y << "=" << f << endl;
getch();
}
