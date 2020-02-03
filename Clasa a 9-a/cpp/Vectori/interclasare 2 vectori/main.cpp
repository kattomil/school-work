#include <iostream>

using namespace std;

void citire(int v[], int&n);
void afisare(int v[], int n);
void interclasare(int a[], int na, int b[], int nb, int c[], int&nc);

int main()
{
    int a[50], na, b[100], nb, c[150], nc;
    citire(a, na);
    citire(b, nb);
    interclasare(a, na, b, nb, c, nc);
    cout << "\nVectorul A:\n";
    afisare(a, na);
    cout << "\nVectorul B:\n";
    afisare(b, nb);
    cout << "\nNumerele ordonate (Vectorul C):\n";
    afisare(c, nc);
    return 0;
}

void citire(int v[], int&n) {
    cout << "n = ";
    cin >> n;
    cout << "V[0]=";
    cin >> v[0];
    for (int i=1; i<n; ++i) {
        do {
            cout << "V[" << i << "]=";
            cin >> v[i];
            if (v[i] < v[i-1]) cout << "Numarul trebuie sa fie mai mare decat cele precedente." << endl;
        } while (v[i] < v[i-1]);
    }
}

void afisare(int v[], int n) {
    for (int i=0; i<n; ++i) cout << v[i] << " ";
}

void interclasare(int a[], int na, int b[], int nb, int c[], int&nc) {
    int i=0, j=0, k=0;
    while (i<na && j<nb)
        if (a[i] <= b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    while (i<na) c[k++] = a[i++];
    while (j<nb) c[k++] = b[j++];
    nc = na+nb;
}
