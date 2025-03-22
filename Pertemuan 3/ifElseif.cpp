#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    system("CLS");
    int a;
    cout<<"menentukan sebuah bilangan: "; cin>>a;

    if(a)
        cout<<" "<<a<<" adalah bilangan negatif";
    else if(a==0)
        cout<<" "<<a<<" adalah bilangan nol";
    else
        cout<<" "<<a<<" adalah bilangan positif";
    getch();
    return 0;
}