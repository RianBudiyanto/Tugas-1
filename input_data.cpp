#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main() {
    string nama, nim, plug;
    
    //input data
    cout << "Masukkan \t:\n";
    cout << "Nama \t: ";
    getline(cin, nama);
    cout << "NIM \t: ";
    getline(cin, nim);
    cout << "Plug \t: ";
    getline(cin, plug);

    //output data
    cout << "\nInilah data Anda :\n";
    cout << "Nama \t: "<< nama << endl;
    cout << "NIM \t: "<< nim << endl;
    cout << "Plug \t: "<< plug << endl;

    //tabel
    cout << "\nDalam bentuk tabel :\n";
    cout << "====================================================" << endl;
    cout << setw(9) << "NIM      " << left << "|" << setw(24) << "Nama" << left << "|" << setw(16) << "Plug" << left << endl;
    cout << "====================================================" << endl;
    cout << setw(9) << nim << left << "|" << setw(24) << nama << left << "|" << setw(16) << plug << left << endl;
    cout << "----------------------------------------------------" << endl;

    return 0;
}