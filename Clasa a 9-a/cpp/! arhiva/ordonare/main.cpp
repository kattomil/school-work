#include <iostream>

using namespace std;

int main()
{
    /*
    se citesc 2 nr intregi a si b, folosind algoritmul de interschimbare sa se ordoneze crescator

    Algoritmul:
    se compara a cu b si daca: a > b
    se interschimba valorile intre ele
    aplicam regula celor 3 pahare
    */
    int a,b,aux;
    cout << "Introduceti o valoare pentru a: ";
    cin >> a;
    cout << "Introduceti o valoare pentru b: ";
    cin >> b;
    cout << endl;
    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    cout << "Numerele ordonate crescator: " << a << ", " << b << endl;
    return 0;
}
