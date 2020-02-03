#include <iostream>

using namespace std;

/**

    Definiti o functie care primeste un numar intreg si returneaza numarul de cifre

**/

int cifre(int x) {
    int cifra;
    int rezultat = 0;
    while (x > 0) {
        rezultat = rezultat+1;
        x = x/10;
    }
    return rezultat;
}

int main()
{
    int x;
    cout << "Introduceti o valoare pentru x = ";
    cin >> x;
    cout << x << " are " << cifre(x) << " cifre" << endl;
    return 0;
}
