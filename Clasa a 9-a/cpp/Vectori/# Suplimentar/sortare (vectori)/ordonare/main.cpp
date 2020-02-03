#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

/**
    Se citesc elementele unui vector din "vector.in"
    Ordonarea elementelor in ordine cresc./desc. in "vector.out"
*/

ifstream f("vector.in");
ofstream g("vector.out");

int n, v[1000];

int main()
{
    /** citire */
    f >> n;
    for (int i=0; i<n; ++i) f >> v[i];
    /** ordonare */
    for (int i=0; i<n; ++i)
        for (int j=i+1; j<n; ++j)
            if (v[i]>v[j])
                swap(v[i], v[j]);
    /** scriere/afisare in fisier */
    for (int i=0; i<n; ++i)
        g << v[i] << " ";
    f.close();
    g.close();
    return 0;
}
