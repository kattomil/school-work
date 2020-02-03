#include <iostream>

using namespace std;

/**
    se citeste un numar natural n
    sa se determine cifra maxima care apare in numar

    indicatie: presupunem ca cifra unitatilor este cifra maxima
    se compara celelalte cifre cu maximul si se modifica daca apare o cifra mai mare
**/

int main()
{
    int n,maxim,c;
    cout << "Introduceti o valoare pentru n = ";
    cin >> n;
    maxim = n%10;
    while(n > 0) {
        c = n%10;
        n = n/10;
        if (maxim < c) {
            maxim=c;
        }
    }
    cout << "Cifra cea mai mare este " << maxim;
    return 0;
}
