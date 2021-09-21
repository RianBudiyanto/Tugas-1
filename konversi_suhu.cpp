//program konversi suhu dari celcius ke fahrenheit, kelvin, dan reamur
#include <iostream>
using namespace std;
 
int main() 
{
    double C, F, K, R;

    //input suhu
    cout << "----------------------------------------------------" << endl;
    cout << "Masukkan suhu dalam derajat celcius : ";
    cin >> C;

    //Rumus konversi suhu dari celcius ke fahrenheit, kelvin, dan reamur
    F = (C * 9/5) + 32;
    K = C + 273;
    R = C * 4/5;

    //output konversi suhu
    cout << "\nSuhu dalam Fahrenheit  : " << F << endl;
    cout << "Suhu dalam Kelvin      : " << K << endl;
    cout << "Suhu dalam Reamur      : " << R << endl;
    cout << "----------------------------------------------------" << endl;

    return 0;
}