#include <iostream>
#include <cmath>

using namespace std;

int pp(int n);
void afisare(int v[], int n);
void ordonare(int v[], int n);

int main()
{
    int n=0;
    cout << "Cate valori doriti sa introduceti?\n";
    do {
    cin >> n;
    if (n<=0) cout << "Numar invalid. Numarul trebuie sa fie mai mare decat valoarea 0\n";
    } while (n <= 0);
    int v[n], a[n], b[n], aa=0, bb=0;
    for (int i=0; i<n; ++i) {
        cout << "Valoarea " << i+1 << " = ";
        cin >> v[i];
    }
    for (int i=0; i<n; ++i) {
        if (pp(v[i]) == 1) {
            a[aa] = v[i];
            aa++;
        } else {
            b[bb] = v[i];
            bb++;
        }
    }
    ordonare(a, aa);
    ordonare(b, bb);
    cout << "Vectorul tau: ";
    afisare(v, n);
    cout << "Numerele prime: ";
    if (aa==0) cout << "Nu exista\n";
    else afisare(a, aa);
    cout << "Numerele neprime: ";
    if (bb==0) cout << "Nu exista\n";
    else afisare(b, bb);
    return 0;
}

int pp(int n) {
    if (sqrt(n) == (int)sqrt(n))
        return 1;
    else
        return 0;
}

void afisare(int v[], int n) {
    for (int i=0; i<n; ++i)
        cout << v[i] << " ";
    cout << endl;
}

void ordonare(int v[], int n) {
    int k=1;
    do {
        k=1;
        for (int i=0; i<n-1; ++i)
        if (v[i] < v[i+1]) {
            swap(v[i], v[i+1]);
            k=0;
        }
    } while (k==0);
}
