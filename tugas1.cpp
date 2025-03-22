#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int bilangan, kelipatan;
    cout << "Masukkan bilangan: "; cin >> bilangan;
    cout << "Masukkan bilangan kelipatan yang ingin dicek: "; cin >> kelipatan;

    if (bilangan % kelipatan == 0) {
        cout << bilangan << " adalah kelipatan dari " << kelipatan << endl;
    } else {
        cout << bilangan << " bukan kelipatan dari " << kelipatan << endl;
    }
    return 0;
}

