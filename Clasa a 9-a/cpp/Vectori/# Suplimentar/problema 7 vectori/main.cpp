#include <iostream>

using namespace std;

void afisare(long long int v[], long long int n) {
    for (int i=1; i<=n; ++i)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    long long int n=0;
    cout << "Introduceti o valoare pentru n.\n";
    do {
    cin >> n;
    if (n<=0) cout << "Numar invalid\n";
    } while (n<=0);
    long long int a[n], aux[n];
    for (int i=1; i<=n; ++i) {
        cout << "Numarul " << i << " = ";
        cin >> a[i];
        aux[i] = a[i];
    }
    long long int b[n];
    for (int i=1; i<=n; ++i) {
        b[i] = 0;
        while (aux[i] != 0) {
            int cifra = aux[i]%10;
            b[i] = b[i]*10+cifra;
            aux[i]/=10;
        }
    }
    long long int c[n], d[n], cc=0, dd=0;
    for (int i=1; i<=n; ++i)
        if (a[i]==b[i]) {
            cc++;
            c[cc] = a[i];
        }
        else {
            dd++;
            d[dd] = a[i];
        }
    cout << "Vectorul tau:\n";
    afisare(a, n);
    cout << "Oglindit:\n";
    afisare(b, n);
    cout << "Numerele Palindrom:\n";
    if (cc==0) cout << "Nu exista\n";
    else afisare(c,cc);
    cout << "Numerele Nepalindrom:\n";
    if (dd==0) cout << "Nu exista\n";
    else afisare(d,dd);
    return 0;
}
