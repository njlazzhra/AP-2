#include<iostream>
using namespace std;

int main(){
    system("CLS");
    int a,b;
    cout<<"nilai a: "; cin>>a;
    cout<<"nilai b: "; cin>>b;

    if (a>b){
        if (a%2==0)
            cout<<a<<" lebih besar dari "<<b<<" adalah bilangan genap"<<endl;
        else
            cout<<a<<" lebih kecil dari "<<b<<" adalah bilangan ganjil"<<endl;
    }
    else{
        cout<<"nilai a tidak lebih besar dari b"<<endl;
    }
}