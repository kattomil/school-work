#include <iostream>
#include <cmath>

using namespace std;

int prime(int n);

int main()
{
    int n, na=0, nb=0, i;

    do {
        cout << "n = ";
        cin >> n;
        if (n<=0) cout << "Trebuie sa introduci un numar mai mare decat 0\n";
    } while (n<=0);

    int v[n];
    for (int i=0; i<n; ++i) {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }

    int a[n], b[n];

    for (i=0; i<n; ++i)
        if (prime(v[i])==1) a[na++] = v[i];
        else b[nb++] = v[i];

    cout << "Vectorul tau: ";
    for (int i=0; i<n; ++i) cout << v[i] << " ";
    cout << endl;

    cout << "Prime: ";
    if (na==0) cout << "Nu exista numere prime";
    else for (i=0; i<na; ++i) cout << a[i] << " ";

    cout << endl << "Neprime: ";
    if (nb==0) cout << "Nu exista numere neprime";
    else for (i=0; i<nb; ++i) cout << b[i] << " ";

    return 0;
}

int prime(int n) {
    for (int i=2; i<=sqrt(n); ++i)
        if (n%i==0) return 0;
    return 1;
}
