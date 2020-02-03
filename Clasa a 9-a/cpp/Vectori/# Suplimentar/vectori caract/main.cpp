#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
/**
    in fisierul "numere.in" contine pe prima linie 1 mil. si pe celelalte randuri mai multe numere.
    sa se afiseze in fisierul "numere.out" pe randuri diferite, in ordine crescatoare, toate numerele de 3 cifre
    care apar in fisier.
*/

ifstream f("numere.in");
ofstream g("numere.out");

int v[1999], n, x;
#define v (v+999)

int main()
{
    f >> n;
    for (int i=1; i<=n; ++i) {
        f >> x;
        if (x>=-999 && x<=999)
            v[x] = 1;
    }
    for (int i=-999; i<=999; ++i)
        if (v[i]==1)
            if (i>=-999 && i<=-100)
                g << i << " ";
            else if (i>=100 && i<=999)
                g << i << " ";
    f.close();
    g.close();
    return 0;
}
