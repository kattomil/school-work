#include <iostream>

using namespace std;

int main()
{
    /*
    Se citesc 3 numere intregi, a,b,c , sa se determine valoarea maxima a celor 3 numere

    Algoritmul:
    Presupunem ca a este valoarea maxima
    Se compara maximul cu b si c
    Se modifica daca apare o valoare mai mare
    */
    int a,b,c,maxim;
    cout << "Introduceti o valoare pentru a: ";
    cin >> a;
    cout << endl;
    cout << "Introduceti o valoare pentru b: ";
    cin >> b;
    cout << endl;
    cout << "Introduceti o valoare pentru c: ";
    cin >> c;
    cout << endl;
    if (a > b && a > c) {
        maxim = a;
    } else if (b > a && b > c) {
        maxim = b;
    } else if (c > a && c > b) {
        maxim = c;
    } else if (a == b) {
        maxim = c;
    } else if (b == c) {
        maxim = a;
    } else if (a == c) {
        maxim = b;
    }
    cout << "Cel mai mare numar este: " << maxim << endl;
    return 0;
}
