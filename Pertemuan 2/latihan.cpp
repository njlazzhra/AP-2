#include <iostream>
using namespace std;

int main(){
    system("CLS");
    const float phi = 3.14;
    int jari2; 
    float volume, luas_permukaan;
   

    cout<<"masukkan jari-jari: "; cin>>jari2;

    volume = ((float)4/3) * phi * jari2 * jari2 * jari2;
    luas_permukaan = 4 * phi * jari2 * jari2;

    cout<<"volume bola: "<<volume<<endl;
    cout<<"luas permukaan bola: "<<luas_permukaan<<endl;
    return 0;
}