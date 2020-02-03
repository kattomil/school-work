#include <iostream>

using namespace std;

int main()
{
    /*
    Se citesc 2 numere intregi, a,b , sa se afiseze pe ecran mesajul "Sunt egale sau sunt Diferite"
    */
    int a,b;
    cout << "Introduceti o valoare pentru a: ";
    cin >> a;
    cout << endl;
    cout << "Introduceti o valoare pentru b: ";
    cin >> b;
    cout << endl;
    if (a != b) {
        cout << "Numerele " << a << " si " << b << " sunt diferite !";
    } else if (a == b) {
        cout << "Numerele " << a << " si " << b << " sunt egale !";
    }
    return 0;
}
