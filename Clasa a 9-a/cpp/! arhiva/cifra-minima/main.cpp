#include <iostream>

using namespace std;

/**
    se citeste un numar natural n
    sa se determine cifra minima care apare in numar

    indicatie: presupunem ca cifra unitatilor este cifra minima
    se compara celelalte cifre cu minimul si se modifica daca apare o cifra mai mica
**/

int main()
{
    int n,minim,c;
    cout << "Introduceti o valoare pentru n = ";
    cin >> n;
    minim = n%10;
    while(n > 0) {
        c = n%10;
        n = n/10;
        if (minim > c) {
            minim=c;
        }
    }
    cout << "Cifra cea mai mica este " << minim;
    return 0;
}
