#include <iostream>

using namespace std;

int main()
{
    /*
    se citesc 2 numere intregi a si b, sa se determine si sa se afiseze valoarea minima;
    */
    int a,b,minim;
    cout << "Introduceti o valoare pentru a!" << endl << "Valoarea aleasa pentru a: ";
    cin >> a;
    cout << endl;
    cout << "Introduceti o valoare pentru b!" << endl << "Valoarea aleasa pentru b: ";
    cin >> b;
    cout << endl;
    if (a < b) {
        minim = a;
    } else if (a > b) {
        minim = b;
    } else {
        minim = a;
    }
    cout << "Numarul minim (Cel mai mic) este: " << minim << endl;
    return 0;
}
